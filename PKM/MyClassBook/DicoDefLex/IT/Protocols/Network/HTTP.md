# Hypertext Transfer Protocol
![[Pasted image 20201020155846.png]]

The **Hypertext Transfer Protocol** ('''HTTP''') is an [[application layer]] protocol for distributed, collaborative, [[hypermedia]] information systems. HTTP is the foundation of data communication for the [[World Wide Web]], where [[hypertext]] documents include [[hyperlink]]s to other resources that the user can easily access, for example by a [[Computer mouse|mouse]] click or by tapping the screen in a web browser.

Development of HTTP was initiated by [[Tim Berners-Lee]] at [[CERN]] in 1989. Development of early HTTP [[Requests for Comments]] (RFCs) was a coordinated effort by the [[Internet Engineering Task Force]] (IETF) and the [[World Wide Web Consortium]] (W3C), with work later moving to the IETF.

HTTP/1.1 was first documented in IETF RFC|2068 in 1997. That specification was obsoleted by IETF RFC|2616 in 1999, which was likewise replaced by the IETF RFC|7230 family of RFCs in 2014.

[[HTTP/2]] is a more efficient expression of HTTP's semantics "on the wire", and was published in 2015; it is now supported by virtually all web browsers<ref>{{Cite web|title=Can I use... Support tables for HTML5, CSS3, etc|url=https://caniuse.com/#search=http2|access-date=2020-06-02|website=caniuse.com}}</ref> and major web servers over [[Transport Layer Security]] (TLS) using an [[Application-Layer Protocol Negotiation]] (ALPN) extension<ref name="rfc7301">{{cite web|url=https://tools.ietf.org/html/rfc7301|title=Transport Layer Security (TLS) Application-Layer Protocol Negotiation Extension|date=July 2014|publisher=IETF|rfc=7301}}</ref> where [[TLS 1.2]] or newer is required.<ref>{{cite web|url=https://http2.github.io/http2-spec/#TLSUsage|title=Hypertext Transfer Protocol Version 2, Use of TLS Features|last1=Belshe|first1=M.|last2=Peon|first2=R.|accessdate=2015-02-10|last3=Thomson|first3=M.}}</ref><ref>{{Cite web|first=David|last=Benjamin|title=Using TLS 1.3 with HTTP/2|url=https://tools.ietf.org/html/rfc8740.html|access-date=2020-06-02|website=tools.ietf.org|quote=This lowers the barrier for deploying TLS 1.3, a major security improvement over TLS 1.2.|language=en}}</ref>

[[HTTP/3]] is the proposed successor to HTTP/2,<ref>{{cite web|url=https://tools.ietf.org/html/draft-ietf-quic-http-22|id=draft-ietf-quic-http-22|title=Hypertext Transfer Protocol Version 3 (HTTP/3)|last=Bishop|first=Mike|website=tools.ietf.org|language=en|date=July 9, 2019|access-date=2019-08-16}}</ref><ref>{{Cite news|url=https://www.zdnet.com/article/http-over-quic-to-be-renamed-http3/|title=HTTP-over-QUIC to be renamed HTTP/3 {{!}} ZDNet|last=Cimpanu|first=Catalin|work=ZDNet|access-date=2018-11-19|language=en}}</ref> which is already in use on the web (enabled by default in latest [[macOS]]), using [[User Datagram Protocol|UDP]] instead of [[Transmission Control Protocol|TCP]] for the underlying transport protocol. Like HTTP/2, it does not obsolete previous major versions of the protocol. Support for HTTP/3 was added to [[Cloudflare]] and [[Google Chrome]] in September 2019, and can be enabled in the stable versions of Chrome and Firefox.
![[Pasted image 20201020155522.png]]

## Technical overview
[[File:Internet1.svg|thumb|right|[[URL]] beginning with the HTTP scheme and the [[World Wide Web|WWW]] domain name label]]

HTTP functions as a [[request–response]] protocol in the client–server computing model. A [[web browser]], for example, may be the ''client'' and an application running on a computer [[Host (network)|hosting]] a [[website]] may be the ''server''. The client submits an HTTP ''request'' message to the server. The server, which provides ''resources'' such as [[HTML]] files and other content, or performs other functions on behalf of the client, returns a ''response'' message to the client. The response contains completion status information about the request and may also contain requested content in its message body.

A web browser is an example of a ''[[user agent]]'' (UA). Other types of user agent include the indexing software used by search providers ([[web crawler]]s), [[voice browser]]s, [[mobile app]]s, and other [[software]] that accesses, consumes, or displays web content.

HTTP is designed to permit intermediate network elements to improve or enable communications between clients and servers. High-traffic websites often benefit from [[web cache]] servers that deliver content on behalf of [[upstream server]]s to improve response time. Web browsers cache previously accessed web resources and reuse them, when possible, to reduce network traffic. HTTP [[proxy server]]s at [[private network]] boundaries can facilitate communication for clients without a globally routable address, by relaying messages with external servers.

HTTP is an [[OSI model layers#]] protocol designed within the framework of the [[Internet protocol suite]]. Its definition presumes an underlying and reliable [[transport layer]] protocol,<ref>{{cite IETF |rfc=2616 |sectionname=Overall Operation |section=1.4|title=RFC 2616  |page=12 |idanchor=ietf}}</ref> and [[Transmission Control Protocol]] (TCP) is commonly used. However, HTTP can be adapted to use unreliable protocols such as the [[Def08.10#User Datagram Protocol#|User Datagram Protocol]] (UDP), for example in [[HTTPU]] and [[Simple Service Discovery Protocol]] (SSDP).

[[Web resource|HTTP resources]] are identified and located on the network by [[Uniform Resource Locator]]s (URLs), using the [[Uniform Resource Identifier]]s (URI's) schemes ''http'' and ''[[https]]''. As defined in {{IETF RFC|3986}}, URIs are encoded as [[hyperlink]]s in [[HTML]] documents, so as to form interlinked [[hypertext]] documents.

HTTP/1.1 is a revision of the original HTTP (HTTP/1.0). In HTTP/1.0 a separate [[Connection-oriented communication|connection]] to the same server is made for every resource request. HTTP/1.1 can reuse a connection multiple times to download images, [[Client-side scripting|scripts]], [[Cascading Style Sheets|stylesheets]], ''etc'' after the page has been delivered. HTTP/1.1 communications therefore experience less [[Latency (engineering)|latency]] as the establishment of TCP connections presents considerable overhead.

## History
[[File:Tim Berners-Lee CP 2.jpg|thumb|[[Tim Berners-Lee]] ]]

The term [[hypertext]] was coined by [[Ted Nelson]] in 1965 in the [[Xanadu Project]], which was in turn inspired by [[Vannevar Bush]]'s 1930s vision of the microfilm-based information retrieval and management "[[memex]]" system described in his 1945 essay "[[As We May Think]]". [[Tim Berners-Lee]] and his team at [[CERN]] are credited with inventing the original HTTP, along with HTML and the associated technology for a web server and a text-based web browser. Berners-Lee first proposed the "WorldWideWeb" project in 1989—now known as the [[World Wide Web]]. The first version of the protocol had only one method, namely GET, which would request a page from a server.<ref>{{cite web |last=Berners-Lee |first=Tim |title=HyperText Transfer Protocol |url=https://www.w3.org/History/19921103-hypertext/hypertext/WWW/Protocols/HTTP.html |publisher=[[World Wide Web Consortium]] |accessdate=31 August 2010}}</ref> The response from the server was always an HTML page.<ref>{{cite web |title=The Original HTTP as defined in 1991 |url=https://www.w3.org/Protocols/HTTP/AsImplemented.html |publisher=World Wide Web Consortium |accessdate=24 July 2010 |author=Tim Berners-Lee|author-link=Tim Berners-Lee }}</ref>

The first documented version of HTTP was '''[https://www.w3.org/pub/WWW/Protocols/HTTP/AsImplemented.html HTTP V0.9]''' (1991). [[Dave Raggett]] led the HTTP Working Group (HTTP WG) in 1995 and wanted to expand the protocol with extended operations, extended negotiation, richer meta-information, tied with a security protocol which became more efficient by adding additional methods and [[List of HTTP header fields|header fields]].<ref name="raggettprofile">{{cite web |last=Raggett |first=Dave |title=Dave Raggett's Bio |url=https://www.w3.org/People/Raggett/profile.html |publisher=World Wide Web Consortium |accessdate=11 June 2010}}</ref><ref>{{cite web |last=Raggett |first=Dave |title=Hypertext Transfer Protocol Working Group |url=https://www.w3.org/Arena/webworld/httpwgcharter.html |publisher=World Wide Web Consortium |accessdate=29 September 2010 |first2=Tim |last2=Berners-Lee}}</ref> {{IETF RFC|1945}} officially introduced and recognized HTTP V1.0 in 1996.

The HTTP WG planned to publish new standards in December 1995<ref>{{cite web |last=Raggett |first=Dave |title=HTTP WG Plans |url=https://www.w3.org/Arena/webworld/httpwgplans.html |publisher=World Wide Web Consortium |accessdate=29 September 2010}}</ref> and the support for pre-standard HTTP/1.1 based on the then developing {{IETF RFC|2068}} (called HTTP-NG) was rapidly adopted by the major browser developers in early 1996. End-user adoption of the new browsers was rapid. In March 1996, one web hosting company reported that over 40% of browsers in use on the Internet were HTTP 1.1 compliant. That same web hosting company reported that by June 1996, 65% of all browsers accessing their servers were HTTP/1.1 compliant.<ref>{{cite web |work=Webcom.com Glossary entry |title=HTTP/1.1 |url=https://www.webcom.com/glossary/http1.1.shtml |archive-url=http://webarchive.loc.gov/all/20011121001051/https://www.webcom.com/glossary/http1.1.shtml |url-status=dead |archive-date=2001-11-21 |accessdate=2009-05-29 }}</ref> The HTTP/1.1 standard as defined in {{IETF RFC|2068}} was officially released in January 1997. Improvements and updates to the HTTP/1.1 standard were released under {{IETF RFC|2616}} in June 1999.

In 2007, the '''[https://httpwg.org/ HTTP Working Group]''' was formed, in part, to revise and clarify the HTTP/1.1 specification. In June 2014, the WG released an updated six-part specification obsoleting {{IETF RFC|2616}}:

* {{IETF RFC|7230}}, ''HTTP/1.1: Message Syntax and Routing''
* {{IETF RFC|7231}}, ''HTTP/1.1: Semantics and Content''
* {{IETF RFC|7232}}, ''HTTP/1.1: Conditional Requests''
* {{IETF RFC|7233}}, ''HTTP/1.1: Range Requests''
* {{IETF RFC|7234}}, ''HTTP/1.1: Caching''
* {{IETF RFC|7235}}, ''HTTP/1.1: Authentication''

[[HTTP/2]] was published as {{IETF RFC|7540}} in May 2015.
{| class="wikitable"
|-
!Year
!HTTP Version
|-
|1991
|0.9
|-
|1996
|1.0
|-
|1997
|1.1
|-
|2015
|[[HTTP/2|2.0]]
|-
|2018
|[[HTTP/3|3.0]]
|}

## HTTP session
An HTTP session is a sequence of network request-response transactions. An HTTP client initiates a request by establishing a [[Transmission Control Protocol]] (TCP) connection to a particular [[TCP and UDP port|port]] on a server (typically port 80, occasionally port 8080; see [[List of TCP and UDP port numbers]]). An HTTP server listening on that port waits for a client's request message. Upon receiving the request, the server sends back a status line, such as "HTTP/1.1 200 OK", and a message of its own. The body of this message is typically the requested resource, although an error message or other information may also be returned.<ref name="ietf2616" />

### Persistent connections
{{Main|HTTP persistent connection}}
In HTTP/0.9 and 1.0, the connection is closed after a single request/response pair. In HTTP/1.1 a keep-alive-mechanism was introduced, where a connection could be reused for more than one request. Such ''persistent connections'' reduce request [[latency (engineering)|latency]] perceptibly because the client does not need to re-negotiate the TCP 3-Way-Handshake connection after the first request has been sent. Another positive side effect is that, in general, the connection becomes faster with time due to TCP's [[TCP congestion control#Slow start|slow-start]]-mechanism.

Version 1.1 of the protocol also made bandwidth optimization improvements to HTTP/1.0. For example, HTTP/1.1 introduced [[chunked transfer encoding]] to allow content on persistent connections to be streamed rather than buffered. [[HTTP pipelining]] further reduces lag time, allowing clients to send multiple requests before waiting for each response. Another addition to the protocol was [[byte serving]], where a server transmits just the portion of a resource explicitly requested by a client.

### HTTP session state
HTTP is a [[stateless protocol]]. A stateless protocol does not require the [[HTTP server]] to retain information or status about each user for the duration of multiple requests. However, some [[web application]]s implement states or [[Session (computer science)|server side sessions]] using for instance [[HTTP cookie]]s or hidden [[variable (computer science)|variable]]s within [[Form (web)|web form]]s.

## HTTP authentication
HTTP provides multiple authentication schemes such as [[basic access authentication]] and [[digest access authentication]] which operate via  a challenge-response mechanism whereby the server identifies and issues a challenge before serving the requested content.

HTTP provides a general framework for access control and authentication, via an extensible set of challenge-response authentication schemes, which can be used by a server to challenge a client request and by a client to provide authentication information.<ref name="ietf7235">{{cite IETF |rfc=7235 |title=Hypertext Transfer Protocol (HTTP/1.1): Authentication |first1=Roy T. |last1=Fielding |first2=Julian F. |last2=Reschke |publisher=IETF |date=June 2014 |ref=ietf}}</ref>

### Authentication realms
The HTTP Authentication specification also provides an arbitrary, implementation-specific construct for further dividing resources common to a given root [[Uniform Resource Identifier|URI]]. The realm value string, if present, is combined with the canonical root URI to form the protection space component of the challenge. This in effect allows the server to define separate authentication scopes under one root URI.<ref name="ietf7235" />

## Message format
{{See also| List of HTTP header fields}}

The client sends '''requests''' to the server and the server sends '''responses'''.

### Request message===
The request message consists of the following:

* a request line (e.g., ''GET /images/logo.png HTTP/1.1'', which requests a resource called {{code|/images/logo.png}} from the server)
* [[HTTP request header field|request header fields]] (e.g., ''Accept-Language: en'')
* an empty line
* an optional [[HTTP message body|message body]]

The request line and other header fields must each end with <CR><LF> (that is, a [[carriage return]] character followed by a [[line feed]] character). The empty line must consist of only <CR><LF> and no other [[Whitespace (computer science)|whitespace]].<ref name="ietf2616sec4">{{cite IETF |rfc=2616 |sectionname=HTTP Message |section=4 |page=31|title=RFC 2616|idanchor=ietf}}</ref> In the HTTP/1.1 protocol, all header fields except ''Host'' are optional.

A request line containing only the path name is accepted by servers to maintain compatibility with HTTP clients before the HTTP/1.0 specification in {{IETF RFC|1945}}.<ref name="apacheweek_com-http11">{{cite web |title=Apache Week. HTTP/1.1 |url=http://www.apacheweek.com/features/http11}} 090502 apacheweek.com</ref>

#### Request methods
    
![[Pasted image 20201020154258.png]]
     \- *An HTTP 1.1 request made using telnet. The request message, response header section, and response body are highlighted.*
    
HTTP defines methods (sometimes referred to as ''verbs'', but nowhere in the specification does it mention ''verb'', nor is OPTIONS or HEAD a verb) to indicate the desired action to be performed on the identified resource. What this resource represents, whether pre-existing data or data that is generated dynamically, depends on the implementation of the server. Often, the resource corresponds to a file or the output of an executable residing on the server. The HTTP/1.0 specification<ref>{{cite IETF |rfc=1945 |title=Hypertext Transfer Protocol – HTTP/1.0 |first1=Tim |last1=Berners-Lee |first2=Roy T. |last2=Fielding |first3=Henrik Frystyk |last3=Nielsen |publisher=IETF |sectionname=Method Definitions |section=8 |pages=30–32}}</ref> defined the GET, HEAD and POST methods and the HTTP/1.1 specification<ref>{{cite IETF |rfc=2616 |sectionname=Method Definitions |section=9 |title=RFC 2616|pages=51–57 |idanchor=ietf}}</ref> added five new methods: OPTIONS, PUT, DELETE, TRACE and CONNECT. By being specified in these documents, their semantics are well-known and can be depended on. Any client can use any method and the server can be configured to support any combination of methods. If a method is unknown to an intermediate, it will be treated as an unsafe and [[idempotence|non-idempotent]] method. There is no limit to the number of methods that can be defined and this allows for future methods to be specified without breaking existing infrastructure. For example, [[WebDAV]] defined seven new methods and {{IETF RFC|5789}} specified the [[Patch verb|PATCH]] method.

Method names are case sensitive.<ref>{{cite web|url=https://tools.ietf.org/html/rfc7230#section-3.1.1 |title=RFC-7210 section 3.1.1 |publisher=Tools.ietf.org |date= |accessdate=2019-06-26}}</ref><ref>{{cite web|url=https://tools.ietf.org/html/rfc7231#section-4.1 |title=RFC-7231 section 4.1 |publisher=Tools.ietf.org |date= |accessdate=2019-06-26}}</ref>  This is in contrast to HTTP header field names which are case-insensitive.<ref>{{cite web|url=https://tools.ietf.org/html/rfc7230#section-3.2 |title=RFC-7230 section 3.2 |publisher=Tools.ietf.org |date= |accessdate=2019-06-26}}</ref>

;GET: The GET method requests a representation of the specified resource. Requests using GET should only [[Data retrieval|retrieve data]] and should have no other effect. (This is also true of some other HTTP methods.)<ref name="ietf2616" /> The [[W3C]] has published guidance principles on this distinction, saying, "[[Web application]] design should be informed by the above principles, but also by the relevant limitations."<ref>{{cite web |last=Jacobs |first=Ian |title=URIs, Addressability, and the use of HTTP GET and POST |url=https://www.w3.org/2001/tag/doc/whenToUseGet.html#checklist |work=Technical Architecture Group finding |publisher=W3C |accessdate=26 September 2010 |year=2004}}</ref> See [[#Safe methods|safe methods]] below.
;HEAD: The HEAD method asks for a response identical to that of a GET request, but without the response body. This is useful for retrieving meta-information written in response headers, without having to transport the entire content.
;POST: The [[POST (HTTP)|POST method]] requests that the server accept the entity enclosed in the request as a new subordinate of the [[web resource]] identified by the URI. The data POSTed might be, for example, an annotation for existing resources; a message for a bulletin board, newsgroup, mailing list, or comment thread; a block of data that is the result of submitting a [[Form (HTML)|web form]] to a data-handling process; or an item to add to a database.<ref>{{cite IETF |rfc=2616 |sectionname=POST |section=9.5|title=RFC 2616 |page=54 |idanchor=ietf}}</ref>
;PUT:The PUT method requests that the enclosed entity be stored under the supplied [[Uniform Resource Identifier|URI]]. If the URI refers to an already existing resource, it is modified; if the URI does not point to an existing resource, then the server can create the resource with that URI.<ref>{{cite IETF |rfc=2616 |sectionname=PUT |section=9.6|title=RFC 2616 |page=55 |idanchor=ietf}}</ref>
;DELETE: The DELETE method deletes the specified resource.
;TRACE: The TRACE method echoes the received request so that a client can see what (if any) changes or additions have been made by intermediate servers.
;OPTIONS: The OPTIONS method returns the HTTP methods that the server supports for the specified [[URL]]. This can be used to check the functionality of a web server by requesting '*' instead of a specific resource.
;CONNECT:<ref name="rfc2616.9.9">{{cite IETF |title=Hypertext Transfer Protocol – HTTP/1.1 |rfc=2616 |sectionname=CONNECT |section=9.9 |page=57 |date=June 1999 |publisher=IETF |accessdate=23 February 2014}}</ref> The CONNECT method converts the request connection to a transparent [[tunneling protocol|TCP/IP tunnel]], usually to facilitate [[Transport Layer Security|SSL]]-encrypted communication (HTTPS) through an unencrypted [[HTTP proxy]].<ref>{{cite IETF |rfc=2817 |title=Upgrading to TLS Within HTTP/1.1 |first1=Rohit |last1=Khare |first2=Scott |last2=Lawrence |date=May 2000 |publisher=IETF}}</ref><ref>{{cite web |url=https://www.kb.cert.org/vuls/id/150227 |title=Vulnerability Note VU#150227: HTTP proxy default configurations allow arbitrary TCP connections |accessdate=2007-05-10 |date=2002-05-17 |publisher=[[CERT Coordination Center|US-CERT]]}}</ref> See [[HTTP tunnel#HTTP CONNECT method|HTTP CONNECT method]].
;PATCH: The PATCH method applies partial modifications to a resource.<ref>{{cite IETF |rfc=5789 |title=PATCH Method for HTTP |first1=Lisa |last1=Dusseault |first2=James M. |last2=Snell |date=March 2010 |publisher=IETF}}</ref>
All general-purpose HTTP servers are required to implement at least the GET and HEAD methods, and all other methods are considered optional by the specification.<ref>{{cite IETF |rfc=2616 |sectionname=Method |section=5.1.1|title=RFC 2616 |page=36 |idanchor=ietf}}</ref>

##### Safe methods
Some of the  methods (for example, GET, HEAD, OPTIONS and TRACE) are, by convention, defined as ''safe'', which means they are [[Command–query separation|intended only for information retrieval]] and should not change the state of the server. In other words, they should not have [[side effect (computer science)|side effects]], beyond relatively harmless effects such as [[Server log|logging]], web caching, the serving of [[web banner|banner advertisements]] or incrementing a [[web counter]]. Making arbitrary GET requests without regard to the context of the application's state should therefore be considered safe. However, this is not mandated by the standard, and it is explicitly acknowledged that it cannot be guaranteed.

By contrast, methods such as POST, PUT, DELETE and PATCH are intended for actions that may cause side effects either on the server, or external side effects such as [[eCommerce|financial transactions]] or transmission of [[email]]. Such methods are therefore not usually used by conforming [[Internet bot|web robots]] or web crawlers; some that do not conform tend to make requests without regard to context or consequences.

Despite the prescribed safety of ''GET'' requests, in practice their handling by the server is not technically limited in any way. Therefore, careless or deliberate programming can cause non-trivial changes on the server. This is discouraged, because it can cause problems for [[web caching]], [[search engines]] and other automated agents, which can make unintended changes on the server. For example, a website might allow deletion of a resource through a URL such as ''<nowiki>http://example.com/article/1234/delete</nowiki>'', which, if arbitrarily fetched, even using ''GET'', would simply delete the article.<ref name="oreilly-get-rails">{{cite book |last=Ediger |first=Brad |date=2007-12-21 |title=Advanced Rails: Building Industrial-Strength Web Apps in Record Time |url=https://shop.oreilly.com/product/9780596510329.do |publisher=O'Reilly Media, Inc. |page=188 |isbn= 978-0596519728 |quote=A common mistake is to use GET for an action that updates a resource. [...] This problem came into the Rails public eye in 2005, when the Google Web Accelerator was released.}}</ref>

One example of this occurring in practice was during the short-lived [[Google Web Accelerator]] [[Beta test|beta]], which prefetched arbitrary URLs on the page a user was viewing, causing records to be automatically altered or deleted ''en masse''. The beta was suspended only weeks after its first release, following widespread criticism.<ref>{{cite web |url=https://blogs.adobe.com/cantrell/archives/2005/06/what_have_we_le.html |title=What Have We Learned From the Google Web Accelerator? |last=Cantrell |first=Christian |archiveurl=https://web.archive.org/web/20170819161233/http://blogs.adobe.com/cantrell/archives/2005/06/what_have_we_le.html |archive-date=2017-08-19 |date=2005-06-01 |website=Adobe Blogs |publisher=Adobe |access-date=2018-11-19 |url-status=dead }}</ref><ref name="oreilly-get-rails" />

##### Idempotent methods and web applications
Methods PUT and DELETE are defined to be [[idempotent#Computer science meaning|idempotent]], meaning that multiple identical requests should have the same effect as a single request. Methods GET, HEAD, OPTIONS and TRACE, being prescribed as safe, should also be idempotent, as HTTP is a [[stateless protocol]].<ref name="ietf2616" />

In contrast, the POST method is not necessarily idempotent, and therefore sending an identical POST request multiple times may further affect state or cause further side effects (such as [[ecommerce|financial transactions]]). In some cases this may be desirable, but in other cases this could be due to an accident, such as when a user does not realize that their action will result in sending another request, or they did not receive adequate feedback that their first request was successful. While [[web browser]]s may show [[alert dialog box]]es to warn users in some cases where reloading a page may re-submit a POST request, it is generally up to the web application to handle cases where a POST request should not be submitted more than once.

Note that whether a method is idempotent is not enforced by the protocol or web server. It is perfectly possible to write a web application in which (for example) a database insert or other non-idempotent action is triggered by a GET or other request. Ignoring this recommendation, however, may result in undesirable consequences, if a [[user agent]] assumes that repeating the same request is safe when it is not.

##### Security
The TRACE method can be used as part of a class of attacks known as [[cross-site tracing]]; for that reason, common security advice is for it to be disabled in the server configuration.<ref name="OWASP-XST">{{cite web |url=https://www.owasp.org/index.php/Cross_Site_Tracing |title=Cross Site Tracing |publisher=[[OWASP]] |accessdate=2016-06-22}}</ref> Microsoft [[Internet Information Services|IIS]] supports a proprietary "TRACK" method, which behaves similarly, and which is likewise recommended to be disabled.![[Pasted image 20201020150009.png]]

{| class="wikitable sortable" style="text-align: center; width: auto; table-layout: fixed;"
|+Security of HTTP methods
|-
!scope="col"| HTTP method
!scope="col"| RFC
!scope="col"| Request has Body
!scope="col"| Response has Body
!scope="col"| Safe
!scope="col"| Idempotent
!scope="col"| Cacheable
|-
!scope="row"| GET
| {{IETF RFC|7231}}
| {{Optional}}
| {{Yes}}
| {{Yes}}
| {{Yes}}
| {{Yes}}
|-
!scope="row"| HEAD
| {{IETF RFC|7231}}
| {{Optional}}
| {{No}}
| {{Yes}}
| {{Yes}}
| {{Yes}}
|-
!scope="row"| POST
| {{IETF RFC|7231}}
| {{Yes}}
| {{Yes}}
| {{No}}
| {{No}}
| {{Yes}}
|-
!scope="row"| PUT
| {{IETF RFC|7231}}
| {{Yes}}
| {{Yes}}
| {{No}}
| {{Yes}}
| {{No}}
|-
!scope="row"| DELETE
| {{IETF RFC|7231}}
| {{Optional}}
| {{Yes}}
| {{No}}
| {{Yes}}
| {{No}}
|-
!scope="row"| CONNECT
| {{IETF RFC|7231}}
| {{Optional}}
| {{Yes}}
| {{No}}
| {{No}}
| {{No}}
|-
!scope="row"| OPTIONS
| {{IETF RFC|7231}}
| {{Optional}}
| {{Yes}}
| {{Yes}}
| {{Yes}}
| {{No}}
|-
!scope="row"| TRACE
| {{IETF RFC|7231}}
| {{No}}
| {{Yes}}
| {{Yes}}
| {{Yes}}
| {{No}}
|-
!scope="row"| PATCH
| {{IETF RFC|5789}}
| {{Yes}}
| {{Yes}}
| {{No}}
| {{No}}
| {{No}}
|}

===Response message===
The response message consists of the following:

* a status line which includes the [[List of HTTP status codes|status code]] and reason message (e.g., ''HTTP/1.1 200 OK'', which indicates that the client's request succeeded)
* [[HTTP response header field|response header fields]] (e.g., ''Content-Type: text/html'')
* an empty line
* an optional [[HTTP message body|message body]]

The status line and other header fields must all end with <CR><LF>. The empty line must consist of only <CR><LF> and no other [[Whitespace character|whitespace]].<ref name="ietf2616sec4" /> This strict requirement for <CR><LF> is relaxed somewhat within message bodies for consistent use of other system linebreaks such as <CR> or <LF> alone.<ref>{{cite IETF |rfc=2616 |sectionname=Canonicalization and Text Defaults|title=RFC 2616  |section=3.7.1 |idanchor=ietf}}</ref>

#### Status codes=
{{See also|List of HTTP status codes}}
In HTTP/1.0 and since, the first line of the HTTP response is called the ''status line'' and includes a numeric ''status code'' (such as "[[HTTP 404|404]]") and a textual ''reason phrase'' (such as "Not Found"). The way the [[user agent]] handles the response depends primarily on the code, and secondarily on the other [[HTTP response header field|response header fields]]. Custom status codes can be used, for if the user agent encounters a code it does not recognize, it can use the first digit of the code to determine the general class of the response.<ref>{{cite IETF |rfc=2616 |sectionname=Status-Line |section=6.1|title=RFC 2616  |page=39 |idanchor=ietf}}</ref>

The standard ''reason phrases'' are only recommendations, and can be replaced with "local equivalents" at the [[web developer]]'s discretion. If the status code indicated a problem, the user agent might display the ''reason phrase'' to the user to provide further information about the nature of the problem. The standard also allows the user agent to attempt to interpret the ''reason phrase'', though this might be unwise since the standard explicitly specifies that status codes are machine-readable and ''reason phrases'' are human-readable. HTTP status code is primarily divided into five groups for better explanation of request and responses between client and server as named:

* Informational <code>1XX</code>
* Successful <code>2XX</code>
* Redirection <code>3XX</code>
* Client Error <code>4XX</code>
* Server Error <code>5XX</code>

## Encrypted connections==
The most popular way of establishing an encrypted HTTP connection is HTTPS.<ref>{{cite book |last=Canavan |first=John |title=Fundamentals of Networking Security |year=2001 |publisher=Artech House |location=Norwood, MA |isbn=9781580531764 |pages=82–83}}</ref> Two other methods for establishing an encrypted HTTP connection also exist: [[Secure Hypertext Transfer Protocol]], and using the [[HTTP/1.1 Upgrade header]] to specify an upgrade to TLS. Browser support for these two is, however, nearly non-existent.<ref>{{cite web |last1=Zalewski |first1=Michal |title=Browser Security Handbook |url=https://code.google.com/p/browsersec/wiki/Part1#True_URL_schemes |accessdate=30 April 2015}}</ref><ref>{{cite web |title=Chromium Issue 4527: implement RFC 2817: Upgrading to TLS Within HTTP/1.1 |url=https://code.google.com/p/chromium/issues/detail?id=4527 |accessdate=30 April 2015}}</ref><ref>{{cite web |title=Mozilla Bug 276813 – [RFE] Support RFC 2817 / TLS Upgrade for HTTP 1.1 |url=https://bugzilla.mozilla.org/show_bug.cgi?id=276813 |accessdate=30 April 2015}}</ref>

## Example session
Below is a sample conversation between an HTTP client and an HTTP server running on [[example.com|www.example.com]], port 80.

### Client request
    
```http
GET / HTTP/1.1
Host: www.example.com

```

A client request (consisting in this case of the request line and only one header field) is followed by a blank line, so that the request ends with a double newline, each in the form of a [[carriage return]] followed by a [[line feed]]. The "Host" field distinguishes between various [[Domain Name System|DNS]] names sharing a single [[IP address]], allowing name-based [[virtual hosting]]. While optional in HTTP/1.0, it is mandatory in HTTP/1.1. (The "/" means /index.html if there is one.)

### Server response
```HTTP
HTTP/1.1 200 OK
Date: Mon, 23 May 2005 22:38:34 GMT
Content-Type: text/html; charset=UTF-8
Content-Length: 155
Last-Modified: Wed, 08 Jan 2003 23:11:55 GMT
Server: Apache/1.3.3.7 (Unix) (Red-Hat/Linux)
ETag: "3f80f-1b6-3e1cb03b"
Accept-Ranges: bytes
Connection: close
```
    
  ```html
<html>
  <head>
    <title>An Example Page</title>
  </head>
  <body>
    <p>Hello World, this is a very simple HTML document.</p>
  </body>
</html>
``` 
   
The [[HTTP ETag|ETag]] (entity tag) header field is used to determine if a cached version of the requested resource is identical to the current version of the resource on the server. ''Content-Type'' specifies the [[Internet media type]] of the data conveyed by the HTTP message, while ''Content-Length'' indicates its length in bytes. The HTTP/1.1 [[webserver]] publishes its ability to respond to requests for certain byte ranges of the document by setting the field ''Accept-Ranges: bytes''. This is useful, if the client needs to have only certain portions<ref>{{cite IETF |draft=draft-ietf-http-range-retrieval-00 |title=Byte Range Retrieval Extension to HTTP |first1=Ari |last1=Luotonen |first2=John |last2=Franks |publisher=IETF |date=February 22, 1996}}</ref> of a resource sent by the server, which is called [[byte serving]]. When ''Connection: close'' is sent, it means that the [[web server]] will close the [[Transmission Control Protocol|TCP]] connection immediately after the transfer of this response.

Most of the header lines are optional. When ''Content-Length'' is missing the length is determined in other ways. Chunked transfer encoding uses a chunk size of 0 to mark the end of the content. ''Identity'' encoding without ''Content-Length'' reads content until the socket is closed.

A ''Content-Encoding'' like ''[[gzip]]'' can be used to compress the transmitted data.

==Similar protocols==

* The [[Gopher (protocol)|Gopher protocol]] is a content delivery protocol that was displaced by HTTP in the early 1990s.
* The [[SPDY]] protocol is an alternative to HTTP developed at [[Google]], superseded by [[HTTP/2]].

## See also <!-- PLEASE RESPECT ALPHABETICAL ORDER -->
{{HTTP}}
    
![[Pasted image 20201020145845.png]]
    
* [[Comparison of file transfer protocols]]
* [[Constrained Application Protocol]] – a semantically similar protocol to HTTP but used UDP or UDP-like messages targeted for devices with limited processing capability; re-uses HTTP and other internet concepts like [[Internet media type]] and web linking (<nowiki>RFC 5988</nowiki>)<ref>{{cite IETF |rfc=5988 |title=Web Linking |first1=Mark |last1=Nottingham |publisher=IETF |date=October 2010}}</ref>
* [[Content negotiation]]
* [[Curl-loader]] – HTTP/S loading and testing open-source software
* [[Digest access authentication]]
* [[Fiddler (software)]]
* [[HTTP compression]]
* [[HTTP/2]] – developed by the IETF's Hypertext Transfer Protocol (httpbis) working group<ref>{{cite web |url=https://datatracker.ietf.org/wg/httpbis/charter/ |title=Hypertext Transfer Protocol Bis (httpbis) – Charter |publisher=IETF |year=2012}}</ref>
* HTTP-MPLEX – A backwards compatible enhancement to HTTP to improve page and web object retrieval time in congested networks proposed by Robert Mattson
* [[List of HTTP header fields]]
* [[List of HTTP status codes]]
* [[Representational state transfer - REST API]] (REST)
* [[Variant object]]
* [[Web cache]]
* [[WebSocket]]
* [[Wireshark]]

==References==
{{reflist}}



==External links==
{{Commons category|Hypertext Transfer Protocol}}
* {{cite web |url=https://www.w3.org/Protocols/History.html |title=Change History for HTTP |publisher=W3.org |date= |accessdate=2010-08-01}} A detailed technical history of HTTP.
* {{cite web |url=https://www.w3.org/Protocols/DesignIssues.html |title=Design Issues for HTTP |publisher=W3.org |date= |accessdate=2010-08-01}} Design Issues by Berners-Lee when he was designing the protocol.
* {{cite web |url=https://www.w3.org/Protocols/Classic.html |title=Classic HTTP Documents |publisher=W3.org |date=1998-05-14 |accessdate=2010-08-01}} list of other classic documents recounting the early protocol history
* [https://www.w3.org/Protocols/HTTP/AsImplemented.html HTTP 0.9 – As Implemented in 1991]


{{Web browsers|fsp}}
{{Semantic Web}}
{{URI scheme}}
{{Web interfaces}}

{{Authority control}}

[[Category:Hypertext Transfer Protocol| ]]
[[Category:Application layer protocols]]
[[Category:Internet protocols]]
[[Category:Network protocols]]
[[Category:World Wide Web]]
[[Category:World Wide Web Consortium standards]]
[[Category:Computer-related introductions in 1991]]
