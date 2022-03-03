{{short description|Protocol facilitating connection of one IP address space to another}}

[[File:NAT Concept-en.svg|thumb|Network address translation between a private network and the Internet]]

'''Network address translation''' ('''NAT''') is a method of remapping an IP [[address space]] into another by modifying [[network address]] information in the [[IP header]] of packets while they are in transit across a traffic [[Router (computing)|routing device]].<ref>{{cite book
|edition= 2
|title= Network Protocols Handbook
|url= https://books.google.com/books?id=D_GrQa2ZcLwC
|publisher= Javvin Technologies Inc.
|date= 2005
|page= 27
|isbn= 9780974094526
|accessdate= 2014-09-16
}}</ref>  The technique was originally used to avoid the need to assign a new address to every host when a network was moved, or when the upstream [[Internet service provider]] was replaced, but could not route the networks address space. It has become a popular and essential tool in conserving global address space in the face of [[IPv4 address exhaustion]]. One Internet-routable [[IP address]] of a NAT gateway can be used for an entire [[private network]].

'''IP masquerading''' is a technique that hides an entire IP address space, usually consisting of private IP addresses, behind a single IP address in another, usually public address space. The hidden addresses are changed into a single (public) IP address as the source address of the outgoing IP packets so they appear as originating not from the hidden host but from the routing device itself. Because of the popularity of this technique to conserve IPv4 address space, the term ''NAT'' has become virtually synonymous with IP masquerading.

As network address translation modifies the IP address information in packets, NAT implementations may vary in their specific behavior in various addressing cases and their effect on network traffic. The specifics of NAT behavior are not commonly documented by vendors of equipment containing NAT implementations.<ref name="rfc4787">{{cite IETF
|author1=François Audet
|author2=Cullen Jennings
|rfc=4787
|title=Network Address Translation (NAT) Behavioral Requirements for Unicast UDP
|publisher=[[IETF]]
|date=January 2007
}}</ref>

==Basic NAT==
The simplest type of NAT provides a one-to-one translation of IP addresses. RFC 2663 refers to this type of NAT as ''basic NAT''; it is also called a ''one-to-one NAT''. In this type of NAT, only the IP addresses, IP header [[checksum]], and any higher-level checksums that include the IP address are changed. Basic NAT can be used to interconnect two IP networks that have incompatible addressing.

=={{Anchor|MASQUERADING}}One-to-many NAT==
[[File:Network Address Translation (file2).jpg|thumb|Network address mapping]]

The majority of network address translators map multiple private hosts to one publicly exposed IP address. In a typical configuration, a local network uses one of the designated ''private'' IP address subnets (RFC 1918). A router in that network has a private address of that address space. The router is also connected to the Internet with a ''public'' address assigned by an [[Internet service provider]]. As traffic passes from the local network to the Internet, the source address in each packet is translated on the fly from a private address to the public address. The router tracks basic data about each active connection (particularly the destination address and port). When a reply returns to the router, it uses the connection tracking data it stored during the outbound phase to determine the private address on the internal network to which to forward the reply.

All IP packets have a source IP address and a destination IP address. Typically packets passing from the private network to the public network will have their source address modified, while packets passing from the public network back to the private network will have their destination address modified. To avoid ambiguity in how replies are translated, further modifications to the packets are required. The vast bulk of Internet traffic uses [[Transmission Control Protocol]] (TCP) or [[User Datagram Protocol]] (UDP). For these protocols the [[port number]]s are changed so that the combination of IP address and port information on the returned packet can be unambiguously mapped to the corresponding private network destination. RFC 2663 uses the term ''network address and port translation'' (NAPT) for this type of NAT. Other names include ''port address translation'' (PAT), ''IP masquerading'', ''NAT overload'' and ''many-to-one NAT''. This is the most common type of NAT and has become synonymous with the term "NAT" in common usage.

This method enables communication through the router only when the conversation originates in the private network since the initial originating transmission is what establishes the required information in the translation tables. A [[web browser]] in the masqueraded network can, for example, browse a website outside, but a web browser outside cannot browse a website hosted within the masqueraded network.{{efn|Most NAT devices today allow the network administrator to configure static translation table entries for connections from the external network to the internal masqueraded network. This feature is often referred to as ''static NAT''. It may be implemented in two types: [[port forwarding]] which forwards traffic from a specific external port to an internal host on a specified port, and designation of a [[DMZ host]] which passes all traffic received on the external interface (on any port number) to an internal IP address while preserving the destination port. Both types may be available in the same NAT device.}} Protocols not based on TCP and UDP require other translation techniques.

One of the additional benefits of one-to-many NAT is that it is a practical solution to [[IPv4 address exhaustion]]. Even large networks can be connected to the Internet using a single public IP address.{{efn|The more common arrangement is having computers that require end-to-end connectivity supplied with a routable IP address, while having others that do not provide services to outside users behind NAT with only a few IP addresses used to enable Internet access.}}

=={{anchor|PORT-TRANSLATION}}Methods of translation==<!-- Other articles link here. -->
Network address and port translation may be implemented in several ways. Some applications that use IP address information may need to determine the external address of a network address translator. This is the address that its communication peers in the external network detect.  Furthermore, it may be necessary to examine and categorize the type of mapping in use, for example when it is desired to set up a direct communication path between two clients both of which are behind separate NAT gateways.

For this purpose, RFC 3489 specified a protocol called ''Simple Traversal of UDP over NATs'' ([[STUN]]) in 2003. It classified NAT implementations as ''full-cone NAT'', ''(address) restricted-cone NAT'', ''port-restricted cone NAT'' or ''symmetric NAT'', and proposed a methodology for testing a device accordingly. However, these procedures have since been deprecated from standards status, as the methods are inadequate to correctly assess many devices. RFC 5389 standardized new methods in 2008 and the acronym ''STUN'' now represents the new title of the specification: ''Session Traversal Utilities for NAT''.

{| class="wikitable"
|+ NAT implementation classifications
|-
| {{anchor|Full-cone NAT}}<!-- Other articles link here. -->'''Full-cone NAT''', also known as ''one-to-one NAT''
* Once an internal address (iAddr:iPort) is mapped to an external address (eAddr:ePort), any packets from iAddr:iPort are sent through eAddr:ePort.
* ''Any external host'' can send packets to iAddr:iPort by sending packets to eAddr:ePort.
| [[Image:Full Cone NAT.svg|right|400px]]
|-
| {{anchor|Restricted-cone NAT}}<!-- Other articles link here. -->'''(Address)-restricted-cone NAT'''
* Once an internal address (iAddr:iPort) is mapped to an external address (eAddr:ePort), any packets from iAddr:iPort are sent through eAddr:ePort.
* An external host (''hAddr:any'') can send packets to iAddr:iPort by sending packets to eAddr:ePort only if iAddr:iPort has previously sent a packet to hAddr:''any''. "Any" means the port number doesn't matter.
| [[Image:Restricted Cone NAT.svg|right|400px]]
|-
| {{anchor|Port-restricted cone NAT}}<!-- Other articles link here. -->'''Port-restricted cone NAT''' Like an address restricted cone NAT, but the restriction includes port numbers.
* Once an internal address (iAddr:iPort) is mapped to an external address (eAddr:ePort), any packets from iAddr:iPort are sent through eAddr:ePort.
* An external host (''hAddr:hPort'') can send packets to iAddr:iPort by sending packets to eAddr:ePort only if iAddr:iPort has previously sent a packet to hAddr:hPort.
| [[Image:Port Restricted Cone NAT.svg|right|400px]]
|-
| {{anchor|Symmetric NAT}}'''Symmetric NAT'''
* Each request from the same internal IP address and port to a specific destination IP address and port is mapped to a unique external source IP address and port; if the same internal host sends a packet even with the same source address and port but to a different destination, a different mapping is used.
* Only an external host that receives a packet from an internal host can send a packet back.
| [[Image:Symmetric NAT.svg|right|400px]]
|}

Many NAT implementations combine these types, and it is, therefore, better to refer to specific individual NAT behavior instead of using the Cone/Symmetric terminology. RFC 4787 attempts to alleviate confusion by introducing standardized terminology for observed behaviors. For the first bullet in each row of the above table, the RFC would characterize Full-Cone, Restricted-Cone, and Port-Restricted Cone NATs as having an ''Endpoint-Independent Mapping'', whereas it would characterize a Symmetric NAT as having an ''Address- and Port-Dependent Mapping''. For the second bullet in each row of the above table, RFC 4787 would also label Full-Cone NAT as having an ''Endpoint-Independent Filtering'', Restricted-Cone NAT as having an ''Address-Dependent Filtering'', Port-Restricted Cone NAT as having an ''Address and Port-Dependent Filtering'', and Symmetric NAT as having either an ''Address-Dependent Filtering'' or ''Address and Port-Dependent Filtering''. Other classifications of NAT behavior mentioned in the RFC include whether they preserve ports, when and how mappings are refreshed, whether external mappings can be used by internal hosts (i.e., its [[hairpinning]] behavior), and the level of determinism NATs exhibit when applying all these rules.<ref name="rfc4787" /> Specifically, most NATs combine ''symmetric NAT'' for outgoing connections with ''static port mapping'', where incoming packets addressed to the external address and port are redirected to a specific internal address and port.

=={{Anchor|PORT-PRESERVATION}}Type of NAT and NAT traversal, role of port preservation for TCP==
The [[NAT traversal]] problem arises when peers behind different NATs try to communicate. One way to solve this problem is to use [[port forwarding]]. Another way is to use various NAT traversal techniques. The most popular technique for TCP NAT traversal is [[TCP hole punching]].

TCP hole punching requires the NAT to follow the ''port preservation'' design for TCP. For a given outgoing TCP communication, the same port numbers are used on both sides of the NAT. NAT port preservation for outgoing TCP connections is crucial for TCP NAT traversal because, under TCP, one port can only be used for one communication at a time; Programs bind distinct TCP sockets to [[ephemeral ports]] for each TCP communication, rendering NAT port prediction impossible for TCP.<ref name="rfc4787" />

On the other hand, for UDP, NATs do not need port preservation. Indeed, multiple UDP communications (each with a distinct [[Communication endpoint|endpoint]]) can occur on the same source port, and applications usually reuse the same UDP socket to send packets to distinct hosts. This makes port prediction straightforward, as it is the same source port for each packet.

Furthermore, port preservation in NAT for TCP allows P2P protocols to offer less complexity and less latency because there is no need to use a third party (like STUN) to discover the NAT port since the application itself already knows the NAT port.<ref name="rfc4787" /><ref>{{cite web | title=Characterization and Measurement of TCP Traversal through NATs and Firewalls | url=http://nutss.gforge.cis.cornell.edu/pub/imc05-tcpnat/ | date=December 2006}}</ref>

However, if two internal hosts attempt to communicate with the same external host using the same port number, the NAT may attempt to use a different external IP address for the second connection or may need to forgo port preservation and remap the port.<ref name="rfc4787" />{{rp|9}}

{{asof|2006}}, roughly 70% of the clients in [[Peer-to-peer|P2P]] networks employed some form of NAT.<ref>{{cite web | title=Illuminating the shadows: Opportunistic network and web measurement | url=http://illuminati.coralcdn.org/stats/ | date=December 2006 | url-status=dead | archiveurl=https://web.archive.org/web/20100724011252/http://illuminati.coralcdn.org/stats/ | archivedate=2010-07-24 }}</ref>

==Implementation==

===Establishing two-way communication===
[[File:Bidirectional NAT-en.svg|thumb|In bidirectional NAT the session can be established both from inside and outside realms.]]
Every TCP and UDP packet contains a source port number and a destination port number. Each of those packets is encapsulated in an IP packet, whose [[IP header]] contains a source IP address and a destination IP address. The IP address/protocol/port number triple defines an association with a [[network socket]].

For publicly accessible services such as web and mail servers the port number is important. For example, port 80 connects through a socket to the [[web server]] software and port 25 to a mail server's [[SMTP]] [[Daemon (computer software)|daemon]]. The IP address of a public server is also important, similar in global uniqueness to a postal address or telephone number. Both IP address and port number must be correctly known by all hosts wishing to successfully communicate.

Private IP addresses as described in RFC 1918 are usable only on private networks not directly connected to the internet. Ports are endpoints of communication unique to that host, so a connection through the NAT device is maintained by the combined mapping of port and IP address. A private address on the inside of the NAT is mapped to an external public address. Port address translation (PAT) resolves conflicts that arise when multiple hosts happen to use the same source port number to establish different external connections at the same time.<!--[[User:Kvng/RTH]]-->

===Telephone number extension analogy===
A NAT device is similar to a phone system at an office that has one public telephone number and multiple extensions. Outbound phone calls made from the office all appear to come from the same telephone number. However, an incoming call that does not specify an extension cannot be transferred to an individual inside the office. In this scenario, the office is a private LAN, the main phone number is the public IP address, and the individual extensions are unique port numbers.<ref>{{cite web |url=http://www.tieline.com/Downloads/Audio-over-IP-Instant-Expert-Guide-v1.pdf |title=The Audio over IP Instant Expert Guide |date=January 2010 |accessdate=2011-08-19 |publisher=Tieline |archive-url=https://web.archive.org/web/20111008014142/http://www.tieline.com/Downloads/Audio-over-IP-Instant-Expert-Guide-v1.pdf |archive-date=2011-10-08 |url-status=dead }}</ref>

===Translation of the endpoint===
With NAT, all communications sent to external hosts actually contain the ''external'' IP address and port information of the NAT device instead of internal host IP addresses or port numbers.

*When a computer on the private (internal) network sends an [[IPv4 packet]] to the external network, the NAT device replaces the internal IP address in the source field of the packet header (''sender's address'') with the external IP address of the NAT device. PAT may then assign the connection a port number from a pool of available ports, inserting this port number in the source port field (much like the ''post office box number''), and forwards the packet to the external network. The NAT device then makes an entry in a translation table containing the internal IP address, original source port, and the translated source port. Subsequent packets from the same connection are translated to the same port number.
*The computer receiving a packet that has undergone NAT establishes a connection to the port and IP address specified in the altered packet, oblivious to the fact that the supplied address is being translated (analogous to using a ''post office box number'').
*A packet coming from the external network is mapped to a corresponding internal IP address and port number from the translation table, replacing the external IP address and port number in the incoming packet header (similar to the translation from ''[[post office box]] number'' to ''[[street address]]''). The packet is then forwarded over the inside network. Otherwise, if the destination port number of the incoming packet is not found in the translation table, the packet is dropped or rejected because the PAT device doesn't know where to send it.

NAT only translates IP addresses and ports of its internal hosts, hiding the true endpoint of an internal host on a private network.

===Visibility of operation===
NAT operation is typically transparent to both the internal and external hosts.

Typically the internal host is aware of the true IP address and TCP or UDP port of the external host. Typically the NAT device may function as the default gateway for the internal host. However the external host is only aware of the public IP address for the NAT device and the particular port being used to communicate on behalf of a specific internal host.

==Applications==
;Routing: Network address translation is used in avoiding IP address overlapping.<ref>{{cite web | title=Using NAT in Overlapping Networks | url=https://www.cisco.com/c/en/us/support/docs/ip/network-address-translation-nat/13774-3.html | date=August 2005}}</ref><ref>{{cite web | title=VPNs with Overlapping Subnets Problem Scenario | url=https://www.juniper.net/documentation/en_US/release-independent/nce/topics/concept/lan2lan-vpn-jseries-srx-series-overview.html | date=September 2017}}</ref> Address overlapping occurs when hosts in different networks with the same IP address space try to reach the same destination host. This most often a misconfiguration and may result from the merger of two networks or subnets, specially when using RFC1918-network space. The destination host experiences traffic apparently arriving from the same network, and intermediate routers have no way to determine where reply traffic should be sent to. The solution is either renumbering, or implementing a network address translator.

;Load balancing: In [[client-server]] applications, [[Load balancing (computing)|load balancers]] forward client requests to a set of server computers to manage the work load of each server. Network address translation may be used to map a representative IP address of the server cluster to specific hosts that service the request.<ref>{{cite web | title=Load Sharing using IP Network Address Translation |url=https://tools.ietf.org/html/rfc2391 | date=August 1998}}</ref><ref>{{cite web | title=What Is Layer 4 Load Balancing? |url=https://www.nginx.com/resources/glossary/layer-4-load-balancing | date=June 2020}}</ref><ref>{{cite web | title=What is load balancing? |url=https://nfware.com/blog-what-is-load-balancing | date=November 2018}}</ref><ref>{{cite web | title=Configure Server Load Balancing Using Dynamic NAT |url=https://www.cisco.com/c/en/us/support/docs/ip/network-address-translation-nat/200608-Server-Load-Balancing-Using-Dynamic-NAT.html | date=June 2018}}</ref>

==Related techniques==
[[IEEE]] Reverse Address and Port Translation (RAPT or RAT) allows a host whose real [[IP address]] is changing from time to time to remain reachable as a server via a fixed home IP address.<ref>{{cite book |pages=32–40 |doi=10.1109/MCSA.1999.749275 |chapter=RAT: A quick (and dirty?) push for mobility support |year=1999 |last1=Singh |first1=R. |last2=Tay |first2=Y.C. |last3=Teo |first3=W.T. |last4=Yeow |first4=S.W. |title=Proceedings WMCSA'99. Second IEEE Workshop on Mobile Computing Systems and Applications |isbn=978-0-7695-0025-6 |citeseerx=10.1.1.40.461}}</ref> In principle, this should allow setting up servers on DHCP-run networks. While not a perfect mobility solution, RAPT together with upcoming protocols like [[DHCP]]-[[Dynamic DNS|DDNS]], it may end up becoming another useful tool in the network admin's arsenal.

[[Cisco]]'s RAPT implementation is PAT or NAT overloading and maps multiple private IP addresses to a single public IP address. Multiple addresses can be mapped to a single address because each private address is tracked by a port number. PAT uses unique source port numbers on the inside global IP address to distinguish between translations.  The port numbers are 16-bit integers. The total number of internal addresses that can be translated to one external address could theoretically be as high as 65,536 per IP address. Realistically, the number of ports that can be assigned a single IP address is around 4000. PAT attempts to preserve the original source port. If this source port is already used, PAT assigns the first available port number starting from the beginning of the appropriate port group 0–511, 512–1023, or 1024–65535. When there are no more ports available and there is more than one external IP address configured, PAT moves to the next IP address to try to allocate the original source port again. This process continues until it runs out of available ports and external IP addresses.

[[Mapping of Address and Port]] is a Cisco proposal that combines [[Address plus Port]] translation with tunneling of the IPv4 packets over an ISP provider's internal [[IPv6]] network. In effect, it is an (almost) [[stateless protocol|stateless]] alternative to [[carrier-grade NAT]] and [[DS-Lite]] that pushes the [[IPv4 address]]/port translation function (and therefore the maintenance of NAT state) entirely into the existing [[customer premises equipment]] NAT implementation. Thus avoiding the [[NAT444]] and statefulness problems of carrier-grade NAT, and also provides a transition mechanism for the deployment of native IPv6 at the same time with very little added complexity.

==Issues and limitations==
Hosts behind NAT-enabled routers do not have [[end-to-end connectivity]] and cannot participate in some Internet protocols. Services that require the initiation of [[Transmission Control Protocol|TCP]] connections from the outside network, or stateless protocols such as those using [[User Datagram Protocol|UDP]], can be disrupted. Unless the NAT router makes a specific effort to support such protocols, incoming packets cannot reach their destination. Some protocols can accommodate one instance of NAT between participating hosts ("passive mode" [[File Transfer Protocol|FTP]], for example), sometimes with the assistance of an [[application-level gateway]] (see below), but fail when both systems are separated from the Internet by NAT. Use of NAT also complicates [[tunneling protocol]]s such as [[IPsec]] because NAT modifies values in the headers which interfere with the integrity checks done by [[IPsec]] and other tunneling protocols.

End-to-end connectivity has been a core principle of the Internet, supported for example by the [[Internet Architecture Board]]. Current Internet architectural documents observe that NAT is a violation of the [[end-to-end principle]], but that NAT does have a valid role in careful design.<ref name=rfc3439>{{cite IETF|rfc=3439|title=Some Internet Architectural Guidelines and Philosophy|last1=Bush|first1=R.|last2=Meyer|first2=D.|publisher=[[IETF]]|date=2002}}</ref> There is considerably more concern with the use of IPv6 NAT, and many IPv6 architects believe IPv6 was intended to remove the need for NAT.<ref name=rfc4864>{{Cite IETF|last=Velde|first=G. Van de|last2=Hain|first2=T.|last3=Droms|first3=R.|last4=Carpenter|first4=B.|last5=Klein|first5=E.|date=2007|title=Local Network Protection for IPv6|rfc=4864|publisher=[[IETF]]}}</ref>

An implementation that only tracks ports can be quickly depleted by internal applications that use multiple simultaneous connections (such as an [[HTTP]] request for a web page with many embedded objects).  This problem can be mitigated by tracking the destination IP address in addition to the port (thus sharing a single local port with many remote hosts), at the expense of implementation complexity and CPU/memory resources of the translation device.

Because the internal addresses are all disguised behind one publicly accessible address, it is impossible for external hosts to initiate a connection to a particular internal host without special configuration on the firewall to forward connections to a particular port.  Applications such as [[VOIP]], [[videoconferencing]], and other peer-to-peer applications must use [[NAT traversal]] techniques to function.

==NAT and TCP/UDP==
"Pure NAT", operating on IP alone, may or may not correctly parse protocols that are totally concerned with IP information, such as [[Internet Control Message Protocol|ICMP]], depending on whether the payload is interpreted by a host on the "inside" or "outside" of translation. As soon as the protocol stack is traversed, even with such basic protocols as [[Transmission Control Protocol|TCP]] and [[User Datagram Protocol|UDP]], the protocols will break unless NAT takes action beyond the network layer.

IP packets have a checksum in each packet header, which provides error detection only for the header. IP datagrams may become fragmented and it is necessary for a NAT to reassemble these fragments to allow correct recalculation of higher-level checksums and correct tracking of which packets belong to which connection.

The major transport layer protocols, TCP and UDP, have a checksum that covers all the data they carry, as well as the TCP/UDP header, plus a "pseudo-header" that contains the source and destination IP addresses of the packet carrying the TCP/UDP header. For an originating NAT to pass TCP or UDP successfully, it must recompute the TCP/UDP header checksum based on the translated IP addresses, not the original ones, and put that checksum into the TCP/UDP header of the first packet of the fragmented set of packets. The receiving NAT must recompute the IP checksum on every packet it passes to the destination host, and also recognize and recompute the TCP/UDP header using the retranslated addresses and pseudo-header.  <!-- The phrase "receiveing NAT" implies NAT is always used on the receiving end; not necessarily the case --> This is not a completely solved problem. One solution is for the receiving NAT to reassemble the entire segment and then recompute a checksum calculated across all packets.

The originating host may perform [[Maximum transmission unit]] (MTU) [[Path MTU Discovery|path discovery]] to determine the packet size that can be transmitted without fragmentation, and then set the ''don't fragment'' (DF) bit in the appropriate packet header field.  Of course, this is only a one-way solution, because the responding host can send packets of any size, which may be fragmented before reaching the NAT.

==DNAT==<!--[[DNAT]] and similar redirects here-->
Destination network address translation (DNAT) is a technique for transparently changing the destination [[IP address]] of an end route [[packet (information technology)|packet]] and performing the inverse function for any replies. Any [[Router (computing)|router]] situated between two endpoints can perform this transformation of the packet.

DNAT is commonly used to publish a service located in a private network on a publicly accessible IP address.  This use of DNAT is also called [[port forwarding]], or [[DMZ (computing)|DMZ]] when used on an entire [[Server (computing)|server]], which becomes exposed to the WAN, becoming analogous to an undefended military [[demilitarised zone]] (DMZ).

==SNAT==
The meaning of the term ''SNAT'' varies by vendor<ref>{{cite web|url=https://www.cisco.com/c/en/us/products/collateral/ios-nx-os-software/ios-software-releases-12-2-t/prod_white_paper0900aecd8052870b.html|title=Enhanced IP Resiliency Using Cisco Stateful NAT|website=Cisco}}</ref><ref>{{cite web|url=https://www.watchguard.com/help/configuration-examples/nat_to_email_servers_configuration_example%20(en-US).pdf |title=Use NAT for Public Accessto Servers with Private IP Addresses on the Private Network (WatchGuard configuration example) |website=www.watchguard.com }}</ref><ref>{{Cite web|url=https://support.f5.com/csp/article/K7820|title=K7820: Overview of SNAT features|date=August 28, 2007|website=AskF5|access-date=February 24, 2019}}</ref>. Many vendors have proprietary definitions for ''SNAT'':
* ''source NAT'' is the common expansion, as the counterpart of ''destination NAT'' (''DNAT'')
* ''stateful NAT'' is used by [[Cisco Systems]]<ref>{{cite web|url=https://www.cisco.com/c/en/us/products/collateral/ios-nx-os-software/ios-software-releases-12-2-t/prod_white_paper0900aecd8052870b.html|title=Enhanced IP Resiliency Using Cisco Stateful NAT|website=Cisco}}</ref>
* ''static NAT'' is used by WatchGuard<ref>{{cite web|url=https://www.watchguard.com/help/configuration-examples/nat_to_email_servers_configuration_example%20(en-US).pdf |title=Use NAT for Public Accessto Servers with Private IP Addresses on the Private Network (WatchGuard configuration example) |website=www.watchguard.com }}</ref>
* ''secure NAT'' is used by [[F5 Networks]]<ref>{{Cite web|url=https://support.f5.com/csp/article/K7820|title=K7820: Overview of SNAT features|date=August 28, 2007|website=AskF5|access-date=February 24, 2019}}</ref> and by Microsoft (in regard to the [[ISA Server]])

Microsoft's Secure network address translation (SNAT) is part of Microsoft's [[ISA Server|Internet Security and Acceleration Server]] and is an extension to the NAT driver built into [[Microsoft Windows Server]]. It provides connection tracking and filtering for the additional network connections needed for the [[FTP]], [[Internet Control Message Protocol|ICMP]], [[H.323]], and [[PPTP]] protocols as well as the ability to configure a transparent HTTP [[proxy server]].

==Dynamic network address translation==
Dynamic NAT, just like static NAT, is not common in smaller networks but is found within larger corporations with complex networks. The way dynamic NAT differs from static NAT is that where static NAT provides a one-to-one internal to public static IP address mapping, dynamic NAT usually uses a ''group'' of available public IP addresses.

=={{Anchor|NAT loopback}}NAT hairpinning==
''[[Hairpinning|NAT hairpinning]]'', also known as  ''NAT loopback'' or ''NAT reflection'',<ref>{{cite web|url=http://www.nycnetworkers.com/real-world/nat-reflectionnat-loopbacknat-hairpinning/ |title=What is NAT Reflection/NAT Loopback/NAT Hairpinning? |publisher=NYC Networkers |date=2014-11-09 |accessdate=2017-04-27}}</ref> is a feature in many consumer routers<ref>{{cite web|url=http://opensimulator.org/wiki/NAT_Loopback_Routers |title=NAT Loopback Routers – OpenSim |publisher=[[OpenSimulator]] |date=2013-10-21 |accessdate=2014-02-21 |format=[[MediaWiki]]}}</ref> that permits the access of a service via the public IP address from inside the local network. This eliminates the need for using separate domain name resolution for hosts inside the network than for the public network for a website.{{clarify|date=February 2019|reason=The last two sentences aren't entirely clear or coherent. Subject expert needed.}}

The following describes an example network:
* Public address: {{IPaddr|203.0.113.1}}. This is the address of the [[Wide area network|WAN]] interface on the router.
* Internal address of router: {{IPaddr|192.168.1.1}}
* Address of the server: {{IPaddr|192.168.1.2}}
* Address of a local computer: {{IPaddr|192.168.1.100}}

If a packet is sent to the public address by a computer at {{IPaddr|192.168.1.100}}, the packet would normally be routed to the [[default gateway]] (the router), unless an explicit route is set in the computer's [[routing]] tables. A router with the NAT loopback feature detects that {{IPaddr|203.0.113.1}} is the address of its WAN interface, and treats the packet as if coming from that interface. It determines the destination for that packet, based on DNAT (port forwarding) rules for the destination. If the data were sent to port 80 and a DNAT rule exists for port 80 directed to {{IPaddr|192.168.1.2}}, then the host at that address receives the packet.

If no applicable DNAT rule is available, the router drops the packet. An [[ICMP Destination Unreachable]] reply may be sent. If any DNAT rules were present, address translation is still in effect; the router still rewrites the source IP address in the packet. The local computer ({{IPaddr|192.168.1.100}}) sends the packet as coming from {{IPaddr|192.168.1.100}}, but the server ({{IPaddr|192.168.1.2}}) receives it as coming from {{IPaddr|203.0.113.1}}. When the server replies, the process is identical as for an external sender. Thus, two-way communication is possible between hosts inside the LAN network via the public IP address.

==NAT in IPv6==
Network address translation is not commonly used in [[IPv6]], because one of the design goals of IPv6 is to restore end-to-end network connectivity.<ref>{{cite web|author=Iljitsch van Beijnum |url=https://arstechnica.com/uncategorized/2008/07/after-staunch-resistance-nat-may-come-to-ipv6-after-all/ |title=After staunch resistance, NAT may come to IPv6 after all |website=Ars Technica |date=2008-07-23 |accessdate=2014-04-24}}</ref>  NAT loopback is not commonly needed. Although still possible, the large addressing space of IPv6 obviates the need to conserve addresses and every device can be given a unique globally routable address. That being said, using [[unique local address]]es in combination with [[IPv6-to-IPv6 Network Prefix Translation|network prefix translation]] can achieve similar results.

==Applications affected by NAT==
Some [[application layer]] protocols (such as [[File Transfer Protocol|FTP]] and [[Session Initiation Protocol|SIP]]) send explicit network addresses within their application data. FTP in active mode, for example, uses separate connections for control traffic (commands) and for data traffic (file contents). When requesting a file transfer, the host making the request identifies the corresponding data connection by its [[OSI model#Layer 3: network layer|network layer]] and [[OSI model#Layer 4: transport layer|transport layer]] addresses. If the host making the request lies behind a simple NAT firewall, the translation of the IP address and/or TCP port number makes the information received by the server invalid. The Session Initiation Protocol (SIP) controls many [[Voice over IP]] (VoIP) calls, <!-- Calls also use H.323 in some systems -->and suffers the same problem. SIP and SDP may use multiple ports to set up a connection and transmit voice stream via [[Real-time Transport Protocol|RTP]]. IP addresses and port numbers are encoded in the payload data and must be known before the traversal of NATs. Without special techniques, such as [[STUN]], NAT behavior is unpredictable and communications may fail.

[[Application Layer Gateway]] (ALG) software or hardware may correct these problems. An ALG software module running on a NAT firewall device updates any payload data made invalid by address translation. ALGs need to understand the higher-layer protocol that they need to fix, and so each protocol with this problem requires a separate ALG. For example, on many Linux systems there are kernel modules called ''connection trackers'' that serve to implement ALGs. However, ALG does not work if the control channel is encrypted (e.g. [[FTPS#Firewall incompatibilities|FTPS]]).

Another possible solution to this problem is to use [[NAT traversal]] techniques using protocols such as [[STUN]] or [[Interactive Connectivity Establishment|ICE]], or proprietary approaches in a [[Session Border Controller|session border controller]]. NAT traversal is possible in both TCP- and UDP-based applications, but [[UDP hole punching|the UDP-based technique]] is simpler, more widely understood, and more compatible with legacy NATs.{{Citation needed|date=February 2011}} In either case, the high-level protocol must be designed with NAT traversal in mind, and it does not work reliably across symmetric NATs or other poorly behaved legacy NATs.

Other possibilities are [[Internet Gateway Device Protocol|UPnP Internet Gateway Device Protocol]], [[NAT-PMP]] (NAT Port Mapping Protocol), or [[Port Control Protocol]] (PCP),<ref name="rfc6887">{{Cite IETF|last=D. Wing|first=Ed|last2=Cheshire|first2=S.|last3=Boucadair|first3=M.|last4=Penno|first4=R.|last5=Selkirk|first5=P.|date=2013|title=Port Control Protocol (PCP)|rfc=6887|publisher=[[IETF]]}}</ref> but these require the NAT device to implement that protocol.

Most traditional client–server protocols (FTP being the main exception), however, do not send layer 3 contact information and therefore do not require any special treatment by NATs. In fact, avoiding NAT complications is practically a requirement when designing new higher-layer protocols today (e.g. the use of [[SSH File Transfer Protocol|SFTP]] instead of FTP).

NATs can also cause problems where [[IPsec]] encryption is applied and in cases where multiple devices such as [[Session Initiation Protocol|SIP]] phones are located behind a NAT. Phones that encrypt their signaling with IPsec encapsulate the port information within an encrypted packet, meaning that NA(P)T devices cannot access and translate the port. In these cases the NA(P)T devices revert to simple NAT operation. This means that all traffic returning to the NAT is mapped onto one client, causing service to more than one client "behind" the NAT to fail. There are a couple of solutions to this problem: one is to use [[Transport Layer Security|TLS]], which operates at level 4 in the [[ISO/OSI Reference Model|OSI Reference Model]] and therefore does not mask the port number; another is to encapsulate the IPsec within [[User Datagram Protocol|UDP]] – the latter being the solution chosen by [[TISPAN]] to achieve secure NAT traversal, or a NAT with [[NAT traversal|"IPsec Passthru"]] support.

[[Interactive Connectivity Establishment]] is a NAT traversal technique that does not rely on ALG support.

The DNS protocol vulnerability announced by [[Dan Kaminsky]] on July 8, 2008 is indirectly affected by NAT port mapping. To avoid DNS server [[cache poisoning]], it is highly desirable not to translate UDP source port numbers of outgoing DNS requests from a DNS server behind a firewall that implements NAT. The recommended workaround for the DNS vulnerability is to make all caching DNS servers use randomized UDP source ports. If the NAT function de-randomizes the UDP source ports, the DNS server becomes vulnerable.

==Examples of NAT software==
* [[Internet Connection Sharing]] (ICS): NAT & DHCP implementation included with [[Microsoft Windows|Windows]] desktop operating systems
* [[IPFilter]]: included with ([[OpenSolaris|Open]])[[Solaris (operating system)|Solaris]], [[FreeBSD]] and [[NetBSD]], available for many other [[Unix-like]] operating systems
* [[ipfirewall]] (ipfw): FreeBSD-native packet filter
* [[Netfilter]] with [[iptables]]/[[nftables]]: the [[Linux]] packet filter
* [[NPF (firewall)|NPF]]: NetBSD-native Packet Filter
* [[PF (firewall)|PF]]: OpenBSD-native Packet Filter
* [[Routing and Remote Access Service]]: [[routing]] implementation included with [[Windows Server]] operating systems
* [[WinGate (computing)|WinGate]]: third-party routing implementation for Windows

==See also==
{{Commons category|Network Address Translation}}
{{Div col|colwidth=25em}}
* [[Anything In Anything]] (AYIYA)&nbsp;— IPv6 over IPv4 UDP, thus working IPv6 tunneling over most NATs
* [[Gateway (telecommunications)]]
* [[Internet Gateway Device Protocol]] (IGD)&nbsp;— UPnP NAT-traversal method
* [[Middlebox]]
* [[Port triggering]]
* [[Hairpinning]]
* [[Subnetwork]]
* [[Port (computer networking)]]
* [[Teredo tunneling]]&nbsp;— NAT traversal using IPv6
* [[Carrier-grade NAT]]&nbsp;– NAT behind NAT within ISP.
{{div col end}}

==Notes==
{{Notelist}}

==References==
{{Reflist}}

==External links==
* [https://web.archive.org/web/20180817001123/http://nattest.net.in.tum.de/ NAT-Traversal Test and results]
* [https://web.archive.org/web/20140811202730/http://nutss.net/pub/imc05-tcpnat/ Characterization of different TCP NATs] – Paper discussing the different types of NAT
* [http://www.cisco.com/en/US/about/ac123/ac147/archived_issues/ipj_7-3/anatomy.html Anatomy: A Look Inside Network Address Translators – Volume 7, Issue 3, September 2004]
* Jeff Tyson, [http://computer.howstuffworks.com/nat.htm/printable HowStuffWorks: ''How Network Address Translation Works'']
* [https://archive.today/20130103041130/http://publib.boulder.ibm.com/infocenter/iseries/v5r3/index.jsp?topic=/rzajw/rzajwstatic.htm Routing with NAT] (Part of the documentation for the IBM iSeries)
* [http://www.cisco.com/c/en/us/support/docs/ip/network-address-translation-nat/26704-nat-faq-00.html Network Address Translation (NAT) FAQ] – Cisco Systems

{{DEFAULTSORT:Network Address Translation}}
[[Category:Network address translation| ]]
