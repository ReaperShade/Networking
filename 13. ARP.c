 1. ARP 
 

	 	//ARP stands for Address Resolution Protocol. It is a protocol used to map IP addresses to MAC addresses on local area networks (LANs)
	 	
	 	// -  Each device on a LAN has both an IP address and a MAC address. The IP address is used for logical communication between devices, while the MAC address is used for physical
	 	      //communication on the network.
	 	// - When a device wants to communicate with another device on the same LAN, it first needs to know the MAC address of the destination device.
	 	// -  The source device sends out an ARP request packet that contains the IP address of the destination device. This ARP request is broadcast to all devices on the LAN.
	 	// - The device with the matching IP address sends back an ARP reply containing its MAC address.
	 	// - The source device adds this IP-to-MAC address mapping to its ARP cache (table) for future reference. 
	 	// - ARP cache entries expire after a configurable timeout. When an entry expires, a new ARP request has to be broadcasted again to retrieve the MAC address.


	 	//So in summary, ARP provides the critical function of resolving IP addresses to MAC addresses to facilitate communication on local networks. It allows devices to identify each other at the hardware level using MAC addresses after initial logical communication is established with IP addresses.




 		//Address Resolution Protocol (ARP) is a network protocol. It is an important part of the network communication used to resolve a network layer (layer 3) IP address to a link layer (layer 2) MAC address. It maps a host's IP address to its corresponding MAC address to facilitate communication between devices on a Local Area Network (LAN). When a device on a LAN wants to communicate with another device, it sends a broadcast message containing the destination IP address and its own MAC address. The device with the matching IP address responds with its own MAC address, and the two devices can then communicate directly using their MAC addresses. This process is known as ARP resolution.

		//ARP is an important part of the network communication process because it allows devices to send and receive data using MAC addresses rather than IP addresses, which can be more efficient. Two types of request messages can be used:

		ARP Request: When a device wants to communicate with another device on a LAN, it sends an ARP request to resolve the destination devices IP address to its MAC address. The request is broadcast to all devices on the LAN and contains the IP address of the destination device. The device with the matching IP address responds with its MAC address.

		ARP Reply: When a device receives an ARP request, it sends an ARP reply to the requesting device with its MAC address. The reply message contains the IP and MAC addresses of both the requesting and the responding devices.
			 
