1. THE OPEN SYSTEM INTERCONNECTION MODEL (OSI)

 

		/*One of the greatest functions of the OSI specifications is to assist in data transfer between disparate hosts regardless of whether they’re Unix/Linux, Windows, or macOS-based. But keep  in mind that the OSI model isn’t a physical model; it’s a conceptual and comprehensive yet fluid set of guidelines, that application developers utilize to create and implement  applications that run on a network. It also provides a framework for creating and implementing networking standards, devices.*/










			1.2 MODEL OSI LAYERS

			 
			 		(Upper Layers)
			 
			 		- Application      	  //File, print, message, database, and application services (dns,)
			 		- Presentation		  //Data encryption, compression, and translation services (ssl, tls)
			 		- Session		      //control protocols, tunneling protocols							
			 
			 
			 		(Lower layers)
			 
			 		- Transport		      //tcp segment, udp datagram
			 		- Network             //Ip addresses, Router, packet 
			 		- Data Link           //Frame, mac address, extended unique identifier, switch
			 		- Physical            //Cables, Fiber, and the signal itself




 

			1.3 PHYSICAL LAYER 

					//The Physical layer specifies the electrical, mechanical, procedural, and functional requirements for activating, maintaining, and deactivating a physical link between end systems.




			1.4 DATA LINK LAYER 

			 
			 		/*The Data Link layer provides the physical transmission of the data and handles error notification, network topology, and flow control. his means the Data Link layer ensures that messages are delivered to the proper device on a LAN using hardware ==(MAC) addresses== and translates messages from the Network layer Into bits for the Physical layer to transmit.*/





			1.5 NETWORK LAYER 

			 
			 		/*The Network layer manages logical device addressing, tracks the location of devices on the network, and determines the best way to move data. This means that the Network layer must transport traffic between devices that aren’t locally attached. Routers are layer 3 devices that are specified at the Network layer and provide the routing services within an internetwork.
			 	
			 		Data Packets These are used to transport user data through the internetwork. Protocols used to support data traffic are called routed protocols. Two examples of routed protocols are ==Internet Protocol (IP) and  Internet Protocol version 6 (IPv6). */




			1.6 TRANSPORT LAYER 

			 
			 		/*The Transport layer segments and reassembles data into a data stream. Services located in the Transport layer handle data from upper-layer applications and unite it onto the same data stream. Data integrity is ensured at the Transport layer by maintaining flow control and by allowing users to request reliable data transport between systems. Flow control provides a means for the receiver to govern the amount of data sent by the sender.*/
			 



			1.7  SESSION LAYER 

			 
			 		/*The Session layer is responsible for setting up, managing, and then tearing down sessions between Presentation layer entities. This layer also provides dialog control  between devices, or nodes. It coordinates communication between systems and serves to organize their communication by offering three different modes: one direction (simplex), both directions, but only one direction at a time half-duplex),and bi-directional (full-duplex).*/





			1.8 PRESENTATION LAYER 

			 
			 		/*The Presentation layer gets its name from its purpose: it presents data to the Application layer and is responsible for data translation and code formatting. */



			1.9 APPLICATION LAYER 

			 
			 		/*The Application layer of the OSI model marks the spot where users actually communicate or interact with the computer. Technically, users communicate with the network stack through application processes, interfaces, or application programming interfaces (APIs) that connect the application in use to the operating system of the computer. The Application layer chooses and determines the availability of communicating partners along with the resources necessary to make their required connections*/









2. TCP/IP (Transmission Control Protocol/Internet Protocol) Model:

		Layers: It has 4 layers:


		1. Network Access Layer (corresponds to layers 1 and 2 of the OSI model)
		2. Internet Layer (equivalent to layer 3 of OSI)
		3. Transport Layer (equivalent to layer 4 of OSI)
		4. Application Layer (combines layers 5, 6 and 7 of OSI)


		
		Purpose: It is a practical model that describes the protocols currently used in networks, especially on the Internet. This model is based on the TCP/IP protocol suite and is used in most network communication systems today.







