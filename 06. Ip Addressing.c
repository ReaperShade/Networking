 1. IP ADDRESSING 


 		/*IP addressing, also known as Internet Protocol addressing, is a system used to assign unique numerical addresses to devices connected to a computer network. These addresses are necessary for identifying and locating devices on a network, enabling them to communicate with each other.
 	
 		There are two versions of IP addressing in common use today: ==IPv4 (Internet Protocol version 4) and IPv6 (Internet Protocol version 6).==
 	
 		IP addresses are essential for routing data packets across networks. They serve as the source and destination addresses in the headers of IP packets, ensuring that data reaches its intended recipient. IP addresses are allocated and managed by regional internet registries (RIRs), which assign blocks of addresses to internet service providers (ISPs) and other organizations.*/
 


 		//Each host in a network is identified by a Media Access Control (MAC) address, which allows data exchange within that specific network. However, if the remote host is in a different network, the MAC address alone is insufficient to establish a connection. On the Internet, addressing is done using IPv4 or IPv6 addresses, which consist of a network address and a host address.

		This applies regardless of whether the network is small, like a home network, or as large as the entire Internet. The IP address ensures that data reaches the correct recipient. A simple analogy for MAC and IPv4/IPv6 addresses is:

		- **IPv4/IPv6**: Represents the unique postal address and district of the recipients building.
		- **MAC**: Specifies the exact floor and apartment within the building.

		//An IP address can be used to communicate with multiple receivers (broadcasting), or a device may respond to multiple IP addresses. However, it is essential that each IP address is unique within a given network.









 2. IPV4 STRUCTURE 

 
 		/*IPv4 addresses are 32-bit numbers represented in decimal format, such as "192.168.0.1". An IPv4 address consists of four octets (8-bit numbers) separated by periods. This addressing scheme allows for approximately 4.3 billion unique addresses, which, due to the rapid growth of the internet, has become insufficient.*/



 
		//The most common method of assigning IP addresses is IPv4, which consists of a 32-bit binary number combined into 4 bytes consisting of 8-bit groups (octets) ranging from 0-255. These are converted into more easily readable decimal numbers, separated by dots and represented as dotted-decimal notation.

		Thus an IPv4 address can look like this:


		Notation 	Presentation

		Binary 	    0111 1111.0000 0000.0000 0000.0000 0001
		Decimal 	127.0.0.1


		//Each network interface (network cards, network printers, or routers) is assigned a unique IP address.

		//The IPv4 format allows 4,294,967,296 unique addresses. The IP address is divided into a host part and a network part. The router assigns the host part of the IP address at home or by an administrator. The respective network administrator assigns the network part. On the Internet, this is IANA, which allocates and manages the unique IPs.




				Class 	Network Address 	First Address 	    Last Address 		Subnetmask 		CIDR 			Subnets 		IPs
				A 		1.0.0.0 			1.0.0.1 			127.255.255.255 	255.0.0.0 		/8 				127 			16,777,214 + 2
				B 		128.0.0.0 			128.0.0.1 			191.255.255.255 	255.255.0.0 	/16 			16,384 			65,534 + 2
				C 		192.0.0.0 			192.0.0.1 			223.255.255.255 	255.255.255.0 	/24 			2,097,152 		254 + 2
				D 		224.0.0.0 			224.0.0.1 			239.255.255.255 	Multicast 		Multicast 		Multicast 		Multicast
				E 		240.0.0.0 			240.0.0.1 			255.255.255.255 	reserved 		reserved 		reserved 		reserved










3. SUBNET MASK 


		//Further division of these classes into smaller networks is achieved through subnetting. Subnetting is performed using subnet masks, which are the same length as an IPv4 address. Similar to class-based addressing, the subnet mask indicates which bit positions in the IP address represent the network portion and which represent the host portion.



				Class 	Network Address 	First Address 	    Last Address 		**Subnetmask 	CIDR 			Subnets 		IPs
				A 		1.0.0.0 			1.0.0.1 			127.255.255.255 	255.0.0.0 		/8 				127 			16,777,214 + 2
				B 		128.0.0.0 			128.0.0.1 			191.255.255.255 	255.255.0.0 	/16 			16,384 			65,534 + 2
				C 		192.0.0.0 			192.0.0.1 			223.255.255.255 	255.255.255.0 	/24 			2,097,152 		254 + 2
				D 		224.0.0.0 			224.0.0.1 			239.255.255.255 	Multicast 		Multicast 		Multicast 		Multicast
				E 		240.0.0.0 			240.0.0.1 			255.255.255.255 	reserved 		reserved 		reserved 		reserved













4. NETWORK AND GATEWAY ADDRESSES



		//The two extra IPs listed in the IPs column are reserved for the network address and the broadcast address. Another crucial element is the default gateway, which refers to the IPv4 address of the router that connects networks and systems using different protocols, managing addresses and transmission methods. It is common practice for the default gateway to be assigned either the first or last usable IPv4 address in a subnet. While not a technical requirement, this has become a de facto standard across networks of all sizes.



			
				Class 	**Network Address 	First Address 	    Last Address 		Subnetmask 		CIDR 			Subnets 		IPs
				A 		1.0.0.0 			1.0.0.1 			127.255.255.255 	255.0.0.0 		/8 				127 			16,777,214 + 2
				B 		128.0.0.0 			128.0.0.1 			191.255.255.255 	255.255.0.0 	/16 			16,384 			65,534 + 2
				C 		192.0.0.0 			192.0.0.1 			223.255.255.255 	255.255.255.0 	/24 			2,097,152 		254 + 2
				D 		224.0.0.0 			224.0.0.1 			239.255.255.255 	Multicast 		Multicast 		Multicast 		Multicast
				E 		240.0.0.0 			240.0.0.1 			255.255.255.255 	reserved 		reserved 		reserved 		reserved






		***Review Classes section**** 
		***Review subnet mask section***












5. BROADCAST ADDRESS 


		//The broadcast IP address's task is to connect all devices in a network with each other. Broadcast in a network is a message that is transmitted to all participants of a network and does not require any response. In this way, a host sends a data packet to all other participants of the network simultaneously and, in doing so, communicates its IP address, which the receivers can use to contact it. This is the last IPv4 address that is used for the broadcast.


				Class 	Network Address 	First Address 	    **Last Address 		Subnetmask 	CIDR 			Subnets 		IPs
				A 		1.0.0.0 			1.0.0.1 			127.255.255.255 	255.0.0.0 		/8 				127 			16,777,214 + 2
				B 		128.0.0.0 			128.0.0.1 			191.255.255.255 	255.255.0.0 	/16 			16,384 			65,534 + 2
				C 		192.0.0.0 			192.0.0.1 			223.255.255.255 	255.255.255.0 	/24 			2,097,152 		254 + 2
				D 		224.0.0.0 			224.0.0.1 			239.255.255.255 	Multicast 		Multicast 		Multicast 		Multicast
				E 		240.0.0.0 			240.0.0.1 			255.255.255.255 	reserved 		reserved 		reserved 		reserved












