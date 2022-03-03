Tags : #ATM #OSI #layer #TCP #IP #data #PDU #SDU #segment #datagram #payload #telecommunications #systems #protocol 

#### Asynchronous Transfer Mode
[Asynchronous Transfer Mode (ATM)](https://en.wikipedia.org/wiki/Asynchronous_Transfer_Mode): is a telecommunications standard defined by [ANSI](https://en.wikipedia.org/wiki/American_National_Standards_Institute) and [ITU](https://en.wikipedia.org/wiki/International_Telecommunication_Union) (formerly CCITT) for **digital transmission** of multiple types of traffic, including **_telephony_** (voice), **_data_**, and **_video signals_** in one network without the use of **separate overlay networks**. 
**ATM** was developed to meet the needs of the **Broadband Integrated Services Digital Network**, as defined in the late 1980s, and designed to integrate telecommunication networks. It can handle both traditional high-throughput data traffic and real-time, low-latency content such as voice and video. ATM provides functionality that uses features of circuit switching and packet switching networks. It uses asynchronous time-division multiplexing, and encodes data into small, fixed-sized network packets.

#### OSI model 
[OSI model](https://en.wikipedia.org/wiki/OSI_model): The Open Systems Interconnection model (OSI model) is a conceptual model that characterizes and standardizes the communication functions of a telecommunication or [[computing system]] without regard to its underlying internal structure and technology. Its goal is the interoperability of diverse communication systems with standard communication protocols.
 ![[OSI model layers]]
 
#### Internet Protocol Suite
 [Internet Protocol Suite](https://en.wikipedia.org/wiki/Internet_protocol_suite)|:<br> The **Internet Protocol Suite** is the conceptual model and set of communications protocols used in the Internet and similar computer networks. It is commonly known as **TCP/IP** because the foundational protocols in the suite are the [[#Transmission Control Protocol|Transmission Control Protocol]] (TCP) and the Internet Protocol (IP). During its development, versions of it were known as the Department of Defense (DoD) model because the development of the networking method was funded by the United States Department of Defense through DARPA. Its implementation is a [protocol stack](https://en.wikipedia.org/wiki/Internet_protocol_suite).

  
   ![Network Topology](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c4/IP_stack_connections.svg/800px-IP_stack_connections.svg.png)
   
 #### Protocol data unit
 [Protocol data unit](https://en.wikipedia.org/wiki/Protocol_data_unit): 
 A protocol data unit (PDU) is a single unit of information transmitted among peer entities of a computer network. A PDU is composed of protocol-specific control information and user data. In the layered architectures of communication protocol stacks, each layer implements protocols tailored to the specific type or mode of data exchange.
 
####  Service data unit
or
#### User Datagram Protocol
[User Datagram Protocol](https://en.wikipedia.org/wiki/User_Datagram_Protocol): In computer networking, the User Datagram Protocol (**UDP**) is one of the core members of the Internet protocol suite. With UDP, computer applications can send messages, in this case referred to as datagrams, to other hosts on an Internet Protocol (IP) network. ==Prior communications are not required in order to set up communication channels or data paths==.
> UDP uses _**datagrams**_ as protocol data units

#### Transmission Control Protocol
[Transmission Control Protocol](https://en.wikipedia.org/wiki/Transmission_Control_Protocol): The Transmission Control Protocol (**TCP**) is one of the main protocols of the Internet protocol suite. It originated in the initial network implementation in which it complemented the Internet Protocol (IP). Therefore, the entire suite is commonly referred to as TCP/IP. TCP provides reliable, ordered, and error-checked delivery of a stream of octets (bytes) between applications running on hosts communicating via an IP network.
 > PDU of this protocol is called a _**segment**_
 
#### Internet Protocol
[Internet Protocol](https://en.wikipedia.org/wiki/Internet_Protocol): The Internet Protocol (**IP**) is the principal communications protocol in the Internet protocol suite for relaying datagrams across network boundaries. Its routing function enables internetworking, and essentially establishes the Internet.

###### IP
IP has the task of delivering packets from the source host to the destination host solely based on the IP addresses in the packet headers. For this purpose, IP defines packet structures that encapsulate the data to be delivered. It also defines addressing methods that are used to label the datagram with source and destination information.

#### Payload
[Payload](https://en.wikipedia.org/wiki/Payload_(computing)): In computing and telecommunications, the payload is the part of transmitted data that is the actual intended message. Headers and metadata are sent only to enable payload delivery.

   





