 1. ICMP (Internet control message protocol)




 	//Internet Control Message Protocol (ICMP) works at the Network layer and is used by IP for many different services. ICMP is a management protocol and messaging service provider for 
 	//IP. Its messages are carried as IP packets. Internet Control Message Protocol (ICMP) is a protocol used by devices to communicate with each other on the Internet for various purposes, including error reporting and status information. It sends requests and messages between devices, which can be used to report errors or provide status information.



 	
 	ICMP packets have the following characteristics

 		- They can provide hosts with information about network problems.
 		- They are encapsulated within IP datagrams.
 	
 	


 	
 	- The following are some common events and messages that ICMP relates to, and the two most popular programs that use ICMP:
 	
 		1. Destination Unreachable: If a router can’t send an IP datagram any further, it uses ICMP to send a message back to the sender, advising it of the situation.
 		2. Buffer Full:  If a router’s memory buffer for receiving incoming datagrams is full, it will use ICMP to send out this message until the congestion abates.
 		3. Hops Each IP datagram is allotted a certain number of routers, called hops, to pass through. If a datagram reaches its limit of hops before arriving at its destination, the last router to receive it deletes it. The executioner router then uses ICMP to send an obituary message, informing the sending machine of the demise of its datagram.
 		4. Ping: Ping uses ICMP echo request and reply messages to check the physical and logical connectivity of machines on an internetwork.
 		5. Traceroute: Traceroute uses IP packet time to live time-outs to discover the path a packet takes as it traverses an internetwork.













2. ICMP REQUEST 



		//A request is a message sent by one device to another to request information or perform a specific action. An example of a request in ICMP is the ping request, which tests the connectivity between two devices. When one device sends a ping request to another, the second device responds with a ping reply message.




ICMP Messages

A message in ICMP can be either a request or a reply. In addition to ping requests and responses, ICMP supports other types of messages, such as error messages, destination unreachable, and time exceeded messages. These messages are used to communicate various types of information and errors between devices on the network.

For example, if a device tries to send a packet to another device and the packet cannot be delivered, the device can use ICMP to send an error message back to the sender. ICMP has two different versions:

    ICMPv4: For IPv4 only
    ICMPv6: For IPv6 only
