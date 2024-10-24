 1. TCP (Transmission control protocol) (connection-oriented)





	 
	 	Here are some key things to know about TCP (Transmission Control Protocol):
	 	
	 	- TCP is one of the main protocols of the Internet Protocol suite. It operates on top of IP and enables reliable, ordered delivery of data between applications over an IP network
	 	- TCP provides mechanisms for flow control, congestion control, and error checking/recovery. It ensures complete and accurate delivery of data streams.



	 Some key features of TCP

	 	- Connection-oriented: //A TCP connection is established between the sender and receiver before data transmission begins. This connection is maintained until both sides finish 
	 						   //sending messages and end the session gracefully.
	 	- Reliable and in-order delivery: //TCP numbers each packet with sequence numbers and acknowledges received packets. Lost or damaged packets are retransmitted. This ensures all 
	 					                  //data is delivered intact and in the correct order.
	 	- Congestion and flow control: //TCP adjusts its send rate dynamically based on network conditions to prevent overwhelming the network with too much data.
	 	- Error checking: //Checksums are used to detect errors or corruption in the data. The receiver can request retransmission of erroneous or missing packets.
	 	- Stream delivery: //TCP delivers a continuous stream of bytes, not discrete packets. This simplifies handling of data for applications.
	 	- Multiplexing: //Multiple TCP connections can exist on the same hosts using port numbers to identify each connection.
	 	

	 	
	 
 
  
  	TCP/IP (Transmission Control Protocol/Internet Protocol) is a generic term for many network protocols. //The protocols are responsible for the switching and transport of data packets on the Internet. The Internet is entirely based on the TCP/IP protocol family. However, TCP/IP does not only refer to these two protocols but is usually used as a generic term for an entire protocol family.  For example, ICMP (Internet Control Message Protocol) or UDP (User Datagram Protocol) belongs to the protocol family. The protocol family provides the necessary functions for transporting and switching data packets in a private or public network.
 
 




 
 TCP SEGMENTS
 
 	1. Source port: This is the port number of the application on the host sending the data.
 	2. destination Port: This is the port number of the application requested on the desti- nation host.
 	3. sequence number: A number used by TCP that puts the data back in the correct order or retransmits missing or damaged data during a process called sequencing.
 	4. Acknowledgment Number: The value is the TCP octet that is expected next.
 	5. Header Length: The number of 32-bit words in the TCP header, which indicates where the data begins. The TCP header (even one including options) is an integral number of        32 bits in length.
 	6. Reserved: Always set to zero.
 	7. Code Bits/TCP Flags: Controls functions used to set up and terminate a session.
 	8. Window:The window size the sender is willing to accept, in octets.
 	9. Checksum: The cyclic redundancy check (CRC), used because TCP doesn’t trust the lower layers and checks everything. The CRC checks the header and data fields.
 	10. Urgent: A valid field only if the Urgent pointer in the code bits is set. If so, this value indicates the offset from the current sequence number, in octets, where the        segment of non-urgent data begins.
 	11. Options May be 0, meaning that no options have to be present, or a multiple of 32 bits. However, if any options are used that do not cause the option field to total a          multiple of 32 bits, padding of 0s must be used to make sure the data begins on a 32-bit boundary. These boundaries are known as words.
 	12. Payload (Data): Handed down to the TCP protocol at the Transport layer, which includes the upper-layer headers.
 
 
 
 



 	Example:
 
 	TCP - Transport Control Protocol Source Port: 5973
 	Destination Port: 23
 	Sequence Number: 1456389907
 	Ack Number: 1242056456 Offset: 5
 	Reserved: %000000
 	Code: %011000
 	Ack is valid
 	push Request
 	Window: 61320
 	Checksum: 0x61a6
 	Urgent Pointer: 0
 	No TCP Options
 	TCP Data Area: vL.5.+.5.+.5.+.5 76 4c 19 35 11 2b 19 35 11 2b 19 35 11 2b 19 35 +. 11 2b 19
 	Frame Check Sequence: 0x0d00000f
 












 2. UDP  UDP (User Data Protocol) (connectionless)

 
		 - User Datagram Protocol (UDP) is a communications protocol that is primarily used to establish low-latency and loss-tolerating connections between applications on the internet
		 - UDP doesn’t offer all the bells and whistles of TCP either, but it does do a fabulous job of transporting information that doesn’t require reliable delivery—and it does so
		   using far fewer network resources.
		 - SNMP monitors the network, sending intermittent messages and a fairly steady flow of status updates and alerts, especially when running on a large network. The cost in overhead to establish, maintain, and close a TCP connection for each one of those little messages would reduce what would be an otherwise healthy, efficient network to a dammed-up bog in no time! Another circumstance calling for UDP over TCP is when reliability is already handled at the Process/Application layer.

