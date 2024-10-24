1. VIRTUAL PRIVATE NETWORK VPN 



	//A Virtual Private Network (VPN) is a technology that facilitates a secure and encrypted connection between a private network and a remote device. This setup allows the remote device to access the private network directly, ensuring secure and confidential access to the network's resources and services. For instance, an administrator working from a different location may need to manage internal servers so employees can continue using internal services. Many companies restrict server access, allowing clients to connect only from the local network. This is where a VPN becomes essential; the administrator connects to the VPN server over the internet, authenticates, and creates an encrypted tunnel that protects the data transfer from being intercepted. Additionally, the administrator's computer is assigned a local (internal) IP address, enabling access to and management of the internal servers. VPNs are commonly used by administrators to provide secure and cost-effective remote access to a company's network. Typically, VPNs utilize TCP port 1723 for Point-to-Point Tunneling Protocol (PPTP) connections and UDP port 500 for IKEv1 and IKEv2 connections.





	//Moreover, we can use VPNs to connect multiple remote locations, such as branch offices, into a single private network, making it easier to manage and access network resources. However, several components and requirements are necessary for a VPN to work:



		Requirement 	Description

		VPN Client 		This is installed on the remote device and is used to establish and maintain a VPN connection with the VPN server. For example, this could be an OpenVPN client.
		VPN Server 		This is a computer or network device responsible for accepting VPN connections from VPN clients and routing traffic between the VPN clients and the private network.
		Encryption 		VPN connections are encrypted using a variety of encryption algorithms and protocols, such as AES and IPsec, to secure the connection and protect the transmitted data.
		Authentication 	The VPN server and client must authenticate each other using a shared secret, certificate, or another authentication method to establish a secure connection.


		//The VPN client and server use these ports to establish and maintain the VPN connection. At the TCP/IP layer, a VPN connection typically uses the Encapsulating Security Payload (ESP) protocol to encrypt and authenticate the VPN traffic. This allows the VPN client and server to exchange data over the public internet securely.







2. IPSEC 



		//Internet Protocol Security (IPsec) is a network security protocol that provides encryption and authentication for internet communications. It is a powerful and widely-used security protocol that provides encryption and authentication for internet communications and works by encrypting the data payload of each IP packet and adding an authentication header (AH), which is used to verify the integrity and authenticity of the packet. IPsec uses a combination of two protocols to provide encryption and authentication:



    	1. Authentication Header (AH): This protocol provides integrity and authenticity for IP packets but does not provide encryption. It adds an authentication header to each IP packet, which contains a cryptographic checksum that can be used to verify that the packet has not been tampered with.

    	2. Encapsulating Security Payload (ESP): This protocol provides encryption and optional authentication for IP packets. It encrypts the data payload of each IP packet and optionally adds an authentication header, similar to AH.




    	//For example, an administrator could place a firewall in between. In order to facilitate IPsec VPN traffic from a VPN client outside a firewall to a VPN server inside, the firewall would need to allow the following protocols:


		Protocol 	Port 							Description

		- Internet Protocol (IP) 	UDP/50-51: This is the primary protocol that provides the foundation for all internet communication. It is used to route packets of data between the VPN client and the VPN server.
		- Internet Key Exchange (IKE) 	UDP/500: IKE is a protocol that is used to establish and maintain secure communication between the VPN client and the VPN server. It is based on the Diffie-Hellman key exchange algorithm, and it is used to negotiate and establish shared secret keys that can be used to encrypt and decrypt the VPN traffic.
		- Encapsulating Security Payload (ESP) 	UDP/4500: ESP is also a protocol that provides encryption and authentication for IP datagrams. It is used to encrypt the VPN traffic between the VPN client and the VPN server, using the keys that were negotiated with IKE.






3. PPTP



		//Point-to-Point Tunneling Protocol (PPTP) is a network protocol that enables the creation of VPNs by establishing a secure tunnel between the VPN client and server, encapsulating the data transmitted within this tunnel. Originally an extension of the Point-to-Point Protocol (PPP), PPTP is supported by many operating systems.

		//However, due to its known vulnerabilities, PPTP is no longer considered secure. It can tunnel protocols such as IP, IPX, or NetBEUI via IP, but has been largely replaced by more secure VPN protocols like L2TP/IPsec, IPsec/IKEv2, and OpenVPN. Since 2012, the use of PPTP has declined because its authentication method, MSCHAPv2, employs the outdated DES encryption, which can be easily cracked with specialized hardware.