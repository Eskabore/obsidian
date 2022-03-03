# User Datagram Protocol
Tags: #UDP #network 



In computer networking, the ''**'User Datagram Protocol**''' ('''UDP''') is one of the core members of the [[Def08.10#Internet Protocol Suite#|Internet protocol suite]]. The protocol was designed by [[David P. Reed]] in 1980 and formally defined in {{IETF RFC|768}}. With UDP, computer applications can send messages, in this case referred to as ''[[datagram]]s'', to other hosts on an [[Internet Protocol]] (IP) network. Prior communications are not required in order to set up [[communication channel]]s or data paths.

UDP uses a simple [[connectionless communication]] model with a minimum of protocol mechanisms. UDP provides [[checksum]]s for data integrity, and [[port numbers]] for addressing different functions at the source and destination of the datagram. It has no [[handshaking]] dialogues, and thus exposes the user's program to any [[Reliability (computer networking)|unreliability]] of the underlying network; there is no guarantee of delivery, ordering, or duplicate protection. If error-correction facilities are needed at the network interface level, an application may use [[Transmission Control Protocol]] (TCP) or [[Stream Control Transmission Protocol]] (SCTP) which are designed for this purpose.

UDP is suitable for purposes where error checking and correction are either not necessary or are performed in the application; UDP avoids the overhead of such processing in the [[protocol stack]]. Time-sensitive applications often use UDP because dropping packets is preferable to waiting for packets delayed due to [[Retransmission (data networks)|retransmission]], which may not be an option in a **real-time system**.
