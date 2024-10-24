1. DEVICES 



 
 	1.  Network Interface (NIC):  
 								//is installed in your computer to connect, or interface, your computer to the network. It provides the physical, electrical, and electronic  connections the network media. The NIC is called a layer 2 device because the information it uses for communication, the MAC address, resides on the Data Link layer.
 	
 	





 	2. Switch:
 			  //A switch is a networking device that connects multiple devices within a local area network (LAN) and enables communication between the connected devices.- Operate at layer 2 (Data Link Layer) of the OSI model. Used to connect multiple network segments or devices within the same LAN. Maintain a MAC address table to forward frames only to the intended destination device.
 	






 	3. Router:
 			  //A router is a networking device that forwards data packets between computer networks. Operate at Layer 3 (Network Layer) of the OSI model. - Maintain routing tables to make decisions about where to forward data packets based on their IP addresses. Connect multiple networks such as LANs, WANs and the internet and enable data transmission between them. Use routing protocols like BGP, OSPF, RIP to communicate with other routers, build routing tables and find the best path for data packets.Provide security and access controls through features like firewalls, VPN, NAT, ACLs etc.
 	
 	






 	4. Firewall:
 		//1. Are hardware or software designed to prevent unauthorized access to or from a private network
 		//2. they are placed at the junction or gateway between the two network, which is usually a private network and public network.
 		//3. the FW examine all messages entering or leaving the intranet and block those that does not meet the security criteria.
 	


 	
 	



 	5. IDS/IPS:

 		//Intrusion detection system (is a security software or hardware device which inspect all inbound and outbound network traffic for suspicious patterns that may indicate a network security breach)
 		//The IDS check traffic for signature that match known intrusion patterns and signals an alarm when a match found.
 		depending of the traffic the IDS is placed outside/inside the FW.	
 	
 		Main Functions of IDS:
 		- An IDS gathers and analyzes information from within a computer or a network, to identify the possible violations of security policy.
 		- An IDS is also referred as a “packet-sniffer,” which intercepts packets traveling along various communication mediums and protocols, usually TCP/IP.
 		- An IDS evaluates traffic for suspected intrusions and signals an alarm after detection.
 	
 	

 		//The main difference between them is that an IPS works inline to actively prevent and block intrusions that are detected based on the rules you set up.  IPSs can send an alarm, create correlation rules and remediation, drop malicious packets, provide malware protection, and reset the connection of offending  source hosts.
 	
 	
 		**The main difference between them is that IDS is a monitoring system, while IPS is a control system.**
 








	6. Access point (APs):
 							 //is just a hub that accepts wireless clients via an analog wireless signal. APs operate at layer 2.
 
 



 	
 	7. Wireless LAN Controller:
 							  //In larger wireless networks it becomes an administrative burden to manage dozens, hundreds, or even thousands of wireless access points. This led to the design and deployment of a centralized Wi-Fi configuration controller known as a WLC, or wireless LAN controllers. The WLC lets you configure the complete network on a single device and push the configurations out to the Wi-Fi access points. 
 	
 









2. CONNECTING SWITCHES 


 
 	1. A point-to-point connection: in networking refers to a direct connection between two endpoints - for example, between two switches or between a switch and a computer. 
 
 		On a switch, a point-to-point link provides a dedicated connection between two ports. Some key benefits of point-to-point connections on switches:
 		
 		// - Dedicated bandwidth - The full bandwidth is available for the two endpoints to communicate. Not shared like in a hub.
 		// - Improved performance - Lower latency and less congestion compared to shared media or hub connections.
 		// - No collisions - Point-to-point links eliminate collision domains, allowing full-duplex communication.
 		// - Scalability - Allows building larger networks by connecting multiple switches together.
 		// - Fault isolation - If one link fails, only that connection is affected, not the entire network.
 		// - Management - Easier to troubleshoot and manage individual port-to-port connections.
 		// - Backplane speed - Switching fabric/backplane needs only run as fast as the link speed.
 		// - Simplicity - Wiring and cabling is much simpler with direct switch-to-switch links.
 		
 		



 
 	2. A switching loop refers to a layer 2 network condition where there are multiple active paths between two endpoints, creating endless packet broadcasts and replication. This can severely impact network performance.
 	
 		Some key points about switching loops:
 		
 		// - Caused by redundancy in layer 2 paths, for example when multiple switches are interconnected.
 		// - Leads to duplication of broadcast frames, MAC address tables being rapidly filled up.
 		// - Can saturate the network with traffic and bring the network down.
 		// - Every node receives multiple copies of frames flooding the network. 
 		// - Spanning tree protocol is designed to prevent switching loops by blocking redundant paths, keeping only one active path between two endpoints.
 		// - If spanning tree fails or is not enabled, manual loop prevention by shutting down redundant ports is needed.
 		// - Unmanaged switches have no loop prevention, so layer 2 loops can easily form in poor designs.
 		// - Symptoms include slow network performance, high utilization, MAC address table instability.
 		// - Diagnose with tools like SNMPPolling, port mirrors, MAC address tables.
 		// - Best practice is to avoid physical loops in design and enable spanning tree protocol.
 	






 	3. Spanning Tree Protocol (STP) is a network protocol that ensures a loop-free topology for any bridged Ethernet local area network. Some key points about STP:
 	
 		// - Defined in IEEE 802.1D standard to prevent switching loops in layer 2 networks.
 		// - Works by selecting a root bridge and then calculating the best loop-free path from all switches to the root bridge. 
 		// - Blocks ports on switches to eliminate loops, leaving a single active path between any two nodes.
 		// - STP creates a spanning tree topology from the mesh network. Redundant switched paths are disabled.
 		// - Uses Bridge Protocol Data Units (BPDUs) sent between switches to calculate spanning tree topology. 
 	



 
 	4. An auto sensing port (or auto MDI/MDI-X port) on an Ethernet switch is a port that can automatically detect the type of cable connected to it and adjust its signal configuration accordingly. Here are some key points:
 	
 		// - Auto sensing ports can support straight through or crossover cables to connect to other devices.
 		// - Normally Ethernet requires crossover cables to connect two devices directly and straight through cables to connect to a hub/switch. Auto sensing ports remove this limitation.
 		// - They have auto MDI/MDI-X configuration ability to detect if the connected device requires a crossover or straight through connection.
 		// - This allows the switch to adapt to the cable type and configure pinouts for sending and receiving data correctly.
 		// - Auto sensing is achieved by switches with two pairs of transmit (TX) and receive (RX) pins that can electrically swap their roles if needed.












3. STRUCTURED CABLING SYSTEM 


 		//A structured cabling system refers to the standardized design and installation of cabling infrastructure in a building. It consists of a set of cables and hardware that make up the telecommunications infrastructure.









4. PATCH PANEL 

 
	 	// A patch panel is a device that facilitates organizing and managing cable connections in a structured cabling system. It consists of a frame or rack on which multiple ports are arranged in a standard pattern. Some key features of patch panels include:
	 	
	 	// - Ports - The ports on a patch panel allow cables to be connected and organized. Common types of ports include RJ45 for Ethernet, coaxial ports for video/RF signals, and fiber optic ports for fiber cabling. The ports are arranged in a standard layout like 24, 48 or 96 ports.
	 	// - Cable management - Patch panels allow cables to be neatly organized and secured, preventing a tangled mess of cables. The panels have built-in cable management features like metal brackets, hooks and slots to route and secure the cables.
	 	// - Connectivity - Patch panels act as a centralized termination point for cabling runs. They allow various devices like computers, phones, network switches etc. to be interconnected via patch cables on  the front, while the backend of the panel connects to horizontal cabling runs.
	 	// - Identification - Patch panels clearly identify and label each port to make it easy to trace and manage connections. The ports are numbered or color coded.
	 	// - Standardized design - Patch panels come in standardized sizes and port configurations to fit standard 19" racks and cabinets. Common heights are 1U, 2U etc. This allows a modular and scalable cabling infrastructure. 
	 	










5. 110 PUSHDOWN 

 
 	// The 110 punchdown refers to a type of insulation displacement connector used for terminating twisted pair cables in telecommunications and networking. Some key features:
 	
 	// - It is also known as a 110-type IDC (Insulation Displacement Connector) block. 
 	// - It has terminals or ports arranged in two vertical rows, with each row having 50 terminals numbered 1 to 50. This gives it the 110 name (2 rows of 50 = 110 ports).
 	// - The terminals have sharp slotted blades that slice through the cable's insulation and make contact with the inner copper wires when the cable is punched down.
 	// - It allows quick and easy termination of cables without having to strip or cut the insulation. The cables are punched down using a special punchdown tool.
 	// - Common punchdown standards used are T568A or T568B which specify the color order for terminating cable pairs.
 	// - It is widely used for CAT3, CAT5, CAT5e and CAT6 network cabling in patch panels, network outlets, distribution frames etc. 
 	// - The 110 connector is also available in other port densities like 66, 50, 25 etc. Higher densities like 110 are used in central patching locations.
 	// - Advantages are easy, fast and reliable terminations and modular design that allows damaged ports to be replaced independently.
 	
 	// In summary, the 110 punchdown connector is a telecom and network cabling interface that allows quick insulation displacement termination of twisted-pair copper cables. The 110 name refers to the double row of 50 terminals




											







6. MAIN DISTRIBUTION FRAME (Median DF)

	 
	 	// A main distribution frame (MDF) is a key telecommunications infrastructure used to interconnect and manage the telecom cable network in a building or facility. Some key features of main distribution frames. We have also Median distribution frame. Es una estructura fisica como un rack para conectar el patch panel, el switch y routers. The Rack works in U. example U1, U2 for the rack size. 








