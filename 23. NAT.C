 1.  INTRODUCTION TO NETWORK ADDRESS TRANSLATION (NAT)

 

 
 	
	 	NAT (Network Address Translation) is a method of mapping multiple private IP addresses to a public IP address. Here is a brief overview:
	 	
	 	- NAT provides a way for multiple devices on a private network to access the public internet using a single public IP address.
	 	- It maps internal private IP addresses to the external public IP address on the NAT device (usually a router or firewall).
	 	- When a device makes an outbound request to the internet, the NAT device replaces the private internal IP address with its own public IP address.
	 	- The NAT tracks internal-to-external IP and port mappings in a translation table. This allows response traffic to be routed back to the correct internal IP device.
	 	- NAT also provides the benefit of hiding private IP addresses from the public internet for security.
	 	- Without NAT, every device connecting to the internet would need a fully routable public IP address, which are limited resources.
	 	- By enabling address translation, NAT allows companies and homes to use private IP ranges like 192.168.x.x internally.
	 	- A downside of NAT is that it can be complex to configure port forwarding for inbound traffic to internal devices.
	 	
	 	In summary, NAT allows efficient internet access for multiple devices using just one public IP address through IP address and port translation.