 1. Internet Protocol (IP)

 


 	- Internet Protocol (IP) is essentially the Internet layer. IP looks at each packet’s destination address. Then, using a routing table, it decides where a packet is to be sent next, choosing the best path. The protocols of the Network Access layer at the bottom of the DoD model don’t possess IP’s enlightened scope of the entire network; they deal only with physical links
 	
 	- Identifying devices on networks requires answering these two questions: Which network is it on? And what is its ID on that network? The answer to the first question is the software address, or logical address (the correct street). The answer to the second question is the hardware address (the correct mailbox). All hosts on a network have a logical ID called an IP address. This is the software, or logical, address and contains valuable encoded information, greatly simplifying the complex task of routing.
 	
 	- IP receives segments from the Host-to-Host layer and fragments them into packets if necessary. IP then reassembles packets back into segments on the receiving side. Each packet is assigned the IP address of the sender and of the recipient. Each router (Layer 3 device) that receives a packet makes routing decisions based on the packet’s destination IP address.
 




 
 		**IP HEADERS:**
 
 		1. Version: IP version number
 		2. Header lenght: Header length (HLEN) in 32-bit words.
 		3. Priority and Type of Service : Type of Service tells how the datagram should be handled. trhe first 3 bits are the priority bits, now called the differentiated services bits.
 		4. Total Length: Length of the packet, including header and data.
 		5. Identification: Unique IP-packet value used to differentiate fragmented packets from different datagrams.
 		6. Flags: This one field specifies whether fragmentation of the packet should occur.
 	    7. Fragment Offset Provides fragmentation and reassembly if the packet is too large to put in a frame. It also allows different maximum transmission units
 		   (MTUs define the size of packets) on the Internet.
 		8. Time To Live The time to live (TTL) is set into a packet when it is originally generated. If it doesn’t get to where it’s supposed to go before the TTL
 		   expires, boom—it’s gone. This stops IP packets from continuously circling the network looking for a home. Time to live (TTL) or hop limit is a mechanism whichlimits the 
 		   lifespan or lifetime of data in a computer or network.
 		9. Protocol Port of upper-layer protocol; for example, TCP is port 6 or UDP is port 17. Also supports Network layer protocols, like ARP and ICMP, and can be peferred to as the Type field in some analyzers. We’ll talk about this field more in a minute.
 		10. Header Checksum: Cyclic redundancy check (CRC) on header only.
 		11. Source IP Address: 32-bit IP address of sending station.
 		12. Destination IP Address 32-bit IP address of the station this packet is destined for.
 		13. Options: Used for network testing, debugging, security, and more.
 		14. Data: After the IP option field, will be the upper-layer data.
 
 
 
 			Example
 
 			IP Header - Internet Protocol Datagram
 			Version: 4
 			Header Length: 5
 			Precedence: 0
 			Type of Service: %000
 			Unused: %00
 			Total Length: 187
 			Identifier: 22486
 			Fragmentation Flags: %010 Do Not Fragment
 			Fragment Offset: 0
 			Time To Live: 60
 			IP Type: 0x06 TCP
 			Header Checksum: 0xd031
 			Source IP Address: 10.7.1.30
 			Dest. IP Address: 10.7.1.10
 			No Internet Datagram Options
 