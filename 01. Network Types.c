1. NETWORK TYPES 



	1.1 WAN

		 
		The WAN (Wide Area Network) is often synonymous with the Internet. When working with networking equipment, you’ll typically encounter both a WAN address and a LAN address. The WAN address is the one accessed from the Internet; however, its important to note that a WAN is essentially a large collection of connected LANs. Many large organizations or government entities may operate an "Internal WAN," also known as an intranet or air-gapped network. Generally, we can identify a network as a WAN if it employs WAN-specific routing protocols like BGP and if the IP address scheme used falls outside the RFC 1918 ranges (10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16).





	1.2 LAN / WLAN

		LANs (Local Area Networks) and WLANs (Wireless Local Area Networks) typically assign IP addresses designated for local use, specifically from the RFC 1918 ranges (10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16). In some cases, such as in certain colleges or hotels, you might receive a routable (internet) IP address when connecting to their LAN, though this is less common. The primary difference between a LAN and a WLAN is that WLANs allow for data transmission without cables, with the distinction mainly being related to security.



	1.3 VPN

		There are 2 primary types of Virtual Private Networks (VPNs), all aimed at creating the impression that users are connected to an alternate network.



		1.3.1 Site-To-Site VPN

		Both the client and server are network devices, usually either routers or firewalls, and they share entire network ranges. This setup is most commonly used to connect company networks over the Internet, enabling multiple locations to communicate as if they were on the same local network.





		1.3.2 Remote Access VPN

		This process involves the client’s computer creating a virtual interface that functions as if it is on the client's network. Hack The Box uses OpenVPN, which creates a TUN adapter that allows access to the labs. When examining these VPNs, it's important to consider the routing table generated upon joining the VPN. If the VPN only sets up routes for specific networks (e.g., 10.10.10.0/24), it is referred to as a Split-Tunnel VPN, meaning the Internet connection is not routed through the VPN. This is beneficial for Hack The Box, as it enables access to the lab while minimizing concerns about monitoring your internet connection. However, for companies, split-tunnel VPNs are generally not advisable because if a machine becomes infected with malware, network-based detection methods may fail, as that traffic would bypass the corporate network.



	