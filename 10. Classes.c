 1. THE HIERARCHICAL IP ADDRESSING  SCHEME

 
 		//An IP address consists of 32 bits of information. These bits are divided into four sections, referred to as octets or bytes, and four octets sum up to 32 bits (8 × 4 = 32). You can depict an IP address using one of three methods:
	 	
	 	1. Dotted-decimal, as in 172.16.30.56
	 	2. Binary, as in 10101100.00010000.00011110.00111000
	 	3. Hexadecimal, as in AC.10.1E.38    (Used in IPV6)















 2. NETWORK ADDRESSING

 
 		//The network address: also called the network number—uniquely identifies each network. Every machine on the same network shares that network address as part of its IP address.
 	   	//In the IP address 172.16.30.56, for example, 172.16 is the network address
 	
 		//The host address is assigned to and uniquely identifies each machine on a network. This part of the address must be unique because it identifies a particular machine—an individual—as opposed to a network, which is a group. So in the sample IP address 172.16.30.56, the 30.56 is the host address
 	
 		//The designers of the Internet decided to create classes of networks based on network size. For the small number of networks possessing a very large number of hosts, they created the rank Class A  network. At the other extreme is the Class C network, which is reserved for the numerous networks with a small number of hosts.


 		- The class distinction for networks bet- ween very large and very small is predictably the Class B network.
 
  
 
 
 
				Summary of the three classes of networks
 
							            8 bits 		         8 bits   		    8 bits               8 bits
 							
				CLASS A                 Network              hosts	             hosts		          hosts
 							
				CLASS B                 Network              Network             hosts                hosts
 							
				CLASS C                 Network              Network             Network              hosts
 							
				CLASS D 	            Multicast
 							
				CLASS E                 Research
 							





				Class 	Network Address 	First Address 	    Last Address 		Subnetmask 		CIDR 			Subnets 	IPs
				A 		1.0.0.0 			1.0.0.1 			127.255.255.255 	255.0.0.0 		/8 				127 		16,777,214 + 2
				B 		128.0.0.0 			128.0.0.1 			191.255.255.255 	255.255.0.0 	/16 			16,384 		65,534 + 2
				C 		192.0.0.0 			192.0.0.1 			223.255.255.255 	255.255.255.0 	/24 			2,097,152 	254 + 2
				D 		224.0.0.0 			224.0.0.1 			239.255.255.255 	Multicast 		Multicast 		Multicast 	Multicast
				E 		240.0.0.0 			240.0.0.1 			255.255.255.255 	reserved 		reserved 		reserved 	reserved










 3. CLASS A


 
 	- Range: 1.0.0.1 to 126.255.255.254
 	- Subnet mask: 255.0.0.0
 	- In a Class A network address, the first byte is assigned to the network address, and the three remaining bytes are used for the host addresses. The Class A format is as follows:
 	
 		  ==network.host.host.host==
 
 		- For example, in the IP address 49.22.102.70, the 49 is the network address and 22.102.70 is the host address. Every machine on this particular network would begin
 		  with the distinctive network address of 49.
 		- Number of hosts: 16.387.064
 		- Number of networks: 126










 4.  CLASS B


 	- Range: 128.1.0.1 to 191.255.255.254
 	- Subnet mask: 255.255.0.0
 	- In a Class B network address, the first 2 bytes are assigned to the network address and the remaining 2 bytes are used for host addresses. The format is as follows:
 	
 		  ==network.network.host.host==
 		
 	- For example, in the IP address 172.16.30.56, the network address is 172.16 and the host address is 30.56.
 	- Number of hosts: 64.516
 	- Number of networks: 16.256
 











 5. CLASS C

 
 	- Range: 192.0.1.1 to 223.255.254.254
 	- Subnet mask: 255.255.255.0
 	- The first 3 bytes of a Class C network address are dedicated to the network portion of the address, with only 1 measly byte remaining for the host address. Here’s the format:
 	
 		  ==network.network.network.host==
 		
 	- Using the example IP address 192.168.100.102, the network address is 192.168.100 and the host address is 102. In a Class C network address, the first 3 bit positions are always the binary 110. The caLculation is as follows: 3 bytes, or 24 bits, minus 3 reserved positions leaves 21 positions.
 	- Number of hosts: 254
 	- Number of networks: 2.064.512
 
 






 6. CLASS D

 
 
 	- Range: 224.0.0.0 to 239.255.255.255
 	- Addresses with the first octet of 224 to 255 are reserved for Class D and E networks. Class D (224–239) is used for multicast addresses and Class E (240–255) for scientific purposes. You do need to remember that the multicast range is from 224.0.0.0 through 239.255.255.255
 
 	- Class D IP addresses are not allocated to hosts and are used for multicasting. Multicasting allows a single host to send a single stream of data to thousands of hosts across the Internet at the same time. It is often used for audio and video streaming, such as IP-based cable TV networks.
 	 - Number of Networks: N/A
 	 - Number of Hosts per Network: Multicasting
 
 	  Las direcciones de clase E están reservadas para uso experimental en proyectos de investigación en la red.
