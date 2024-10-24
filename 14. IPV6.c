1. IPv6 (Internet Protocol version 6)

 
 	//IPv6 is the successor to IPv4, featuring a 128-bit address length compared to IPv4. The prefix in an IPv6 address distinguishes the host and network components. The Internet Assigned Numbers Authority (IANA) oversees the allocation of both IPv4 and IPv6 addresses along with their respective network portions. Over time, IPv6 is anticipated to fully replace IPv4, which remains the predominant protocol on the Internet. However, both IPv4 and IPv6 can coexist simultaneously using a Dual Stack configuration.

	//IPv6 adheres to the end-to-end principle, allowing for publicly accessible IP addresses for all end devices without requiring NAT. As a result, a single interface can have multiple IPv6 addresses, and there are specific IPv6 addresses that can be assigned to multiple interfaces.


 	IPv6 address example
 
 	 - 2001:0db8:3c4d:0012:0000:0000:1234:56ab


 	 An IPv6 address can look like this:

    Full IPv6:  fe80:0000:0000:0000:dd80:b1a9:6687:2d3b/64
    Short IPv6: fe80::dd80:b1a9:6687:2d3b/64




    An IPv6 address consists of two parts:

    1. Network Prefix (network part)
    2. Interface Identifier also called Suffix (host part)







	//The Network Prefix identifies the network, subnet, or address range. The Interface Identifier is formed from the 48-bit MAC address (which we will discuss later) of the interface and is converted to a 64-bit address in the process. The default prefix length is /64. However, other typical prefixes are /32, /48, and /56. If we want to use our networks, we get a shorter prefix (e.g. /56) than /64 from our provider.

	//In RFC 5952, the aforementioned IPv6 address notation was defined:

    - All alphabetical characters are always written in lower case.
    - All leading zeros of a block are always omitted.
    - One or more consecutive blocks of 4 zeros (hex) are shortened by two colons (::).
    - The shortening to two colons (::) may only be performed once starting from the left.


 	







 	 - When you use a web browser to make an HTTPS connection to an IPv6 device, you have to type the address into the browser with brackets around the literal address. Why? Well, a colon is already being used by the browser for specifying a port number. So basically, if you don’t enclose the address in brackets, the browser will have no way toidentify the information. Here’s an example of how this looks:
 	
 	          https://[2001:0db8:3c4d:0012:0000:0000:1234:56ab]/default.html
 	
 	- An IPv6 address is 128 bits long and consists of eight 16-bit fields, each joined by a colon. Each field must contain a hexadecimal number, as opposed to the dotted-decimal notation of IPv4 addresses. 
 	- The leftmost three fields (48 bits) contain the site prefix. The prefix describes the public topology that the ISP or Regional Internet Registry (RIR) typically assigns to the site.
 	- The next field is occupied by the 16-bit subnet ID that you (or another administrator) assigns to the site. The subnet ID describes the private topology, also called the site topology, because it is internal to the site
 	- The four rightmost fields (64 bits) contain the interface ID, also called a token. The interface ID is configured automatically from the interface MAC address or manually in EUI-64 format.
 	- A (normal) IPv6 address has the format y:y:y:y:y:y:y:y, where the y is called a segment and can be any hexadecimal value between 0 and FFFF. The segments are separated by two points, rather than one point. A normal IPv6 address should have eight segments; however, a shorthand notation can be used in the TS4500 management GUI for segments that are zero or have leading zeros.
	
 	




	
	



2. DHCPv6 (Stateful)






 
 	//DHCPv6 works pretty much the same way DHCP does in v4, with the obvious difference that it supports IPv6’s new addressing scheme. And it might come as a surprise, but there are a couple of other options that DHCP still provides for us that autoconfiguration doesn’t. And no, I’m not kidding—in autoconfiguration, there’s absolutely no mention of DNS servers, domain names, or many of the other options that DHCP has always generously provided for us via IPv4. This is a big reason that the odds favor DHCP’s continued use in IPv6 into the future at least partially—maybe even most of the time!
 