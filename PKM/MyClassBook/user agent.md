# User agent

In [[computing]], a '''user agent''' is software (a [[software agent]]) that is acting on behalf of a [[user (computing)|user]], such as a [[web browser]] that "retrieves, renders and facilitates end user interaction with Web content".<ref>{{cite web|url=https://www.w3.org/WAI/UA/work/wiki/Definition_of_User_Agent |title=W3C Definition of User Agent |publisher=www.w3.org |date=16 June 2011 |accessdate=2018-10-20}}</ref> An email reader is a [[mail user agent]]. 

In many cases, a user agent acts as a [[client (computing)|client]] in a [[network protocol]] used in communications within a [[client–server]] [[distributed computing]] system. In particular, the [[Hypertext Transfer Protocol]] (HTTP) identifies the client software originating the request, using a user-agent header, even when the client is not operated by a user.  The [[Session Initiation Protocol]] (SIP) protocol (based on HTTP) followed this usage. In the SIP, the term ''user agent'' refers to both end points of a communications session.<ref name="rfc3261">RFC 3261, ''SIP: Session Initiation Protocol'', IETF, The Internet Society (2002)</ref>

==User agent identification== <!-- Courtesy note per [[WP:RSECT]]: [[User agent identification]] and several other redirects links here -->
When a software agent operates in a network protocol, it often identifies itself, its application type, [[operating system]], software vendor, or software revision, by submitting a characteristic identification [[string (computer science)|string]] to its operating peer. In [[Hypertext Transfer Protocol|HTTP]],<ref name="rfc7231">RFC 7231, ''Hypertext Transfer Protocol (HTTP/1.1): Semantics and Content'', IETF, The Internet Society (June 2014)</ref> SIP,<ref name="rfc3261" /> and NNTP<ref>{{cite IETF |title=Netnews Article Format |rfc=5536 |section=3.2.13 |date=November 2009 |publisher=[[Internet Engineering Task Force|IETF]]}}</ref> protocols, this identification is transmitted in a header field ''User-Agent''. [[Internet bot|Bot]]s, such as Web crawlers, often also include a [[Uniform Resource Locator|URL]] and/or [[e-mail address]] so that the [[Webmaster]] can contact the operator of the bot.

==Use in HTTP==
In HTTP, the '''User-Agent string''' is often used for [[content negotiation]], where the origin server selects suitable content or operating parameters for the response. For example, the User-Agent string might be used by a web server to choose variants based on the known capabilities of a particular version of client software. The concept of content tailoring is built into the HTTP standard in [https://tools.ietf.org/html/rfc1945#page-46 RFC 1945] "for the sake of tailoring responses to avoid particular user agent limitations.”

The User-Agent string is one of the criteria by which Web crawlers may be excluded from accessing certain parts of a website using the [[Robots Exclusion Standard]] (''robots.txt'' file).

As with many other HTTP request headers, the information in the "User-Agent" string contributes to the information that the client sends to the server, since the string can vary considerably from user to user.<ref>Peter Eckersley. "[https://www.eff.org/deeplinks/2010/01/tracking-by-user-agent Browser Versions Carry 10.5 Bits of Identifying Information on Average]", [[Electronic Frontier Foundation]], 27 January 2010. Retrieved 25 August 2011.</ref>

===Format for human-operated web browsers===
The User-Agent string format is currently specified by section 5.5.3 of  [http://tools.ietf.org/html/rfc7231#section-5.5.3 HTTP/1.1 Semantics and Content]. The format of the User-Agent string in HTTP is a list of product tokens (keywords) with optional comments. For example, if a user's product were called WikiBrowser, their user agent string might be ''WikiBrowser/1.0 Gecko/1.0''. The "most important" product component is listed first.

The parts of this string are as follows:

* product name and version (''WikiBrowser/1.0'')
* layout engine and version (''Gecko/1.0'')

During the first [[browser wars|browser war]], many web servers were configured to send web pages that required advanced features, including [[Framing (World Wide Web)|frames]], to clients that were identified as some version of [[Mozilla]] only.<ref>[http://webaim.org/blog/user-agent-string-history/ History of the browser user-agent string]. WebAIM.</ref> Other browsers were considered to be older products such as [[Mosaic (web browser)|Mosaic]], [[Cello (web browser)|Cello]], or [[Samba (web browser)|Samba]], and would be sent a bare bones HTML document.

For this reason, most Web browsers use a User-Agent string value as follows:

''Mozilla/[version] ([system and browser information]) [platform] ([platform details]) [extensions]''. For example, Safari on the iPad has used the following:

 Mozilla/5.0 (iPad; U; CPU OS 3_2_1 like Mac OS X; en-us) AppleWebKit/531.21.10 (KHTML, like Gecko) Mobile/7B405

The components of this string are as follows:

* ''Mozilla/5.0'': Previously used to indicate compatibility with the Mozilla rendering engine.
* ''(iPad; U; CPU OS 3_2_1 like Mac OS X; en-us)'': Details of the system in which the browser is running.
* ''AppleWebKit/531.21.10'': The platform the browser uses.
* ''(KHTML, like Gecko)'': Browser platform details.
* ''Mobile/7B405'': This is used by the browser to indicate specific enhancements that are available directly in the browser or through third parties. An example of this is Microsoft Live Meeting which registers an extension so that the Live Meeting service knows if the software is already installed, which means it can provide a streamlined experience to joining meetings.

Before migrating to the [[Chromium (web browser)|Chromium]] code base, [[Opera (web browser)|Opera]] was the most widely used web browser that did not have the User-Agent string with "Mozilla" (instead beginning it with "Opera"). Since July 15, 2013,<ref>{{cite web|url=http://my.opera.com/ODIN/blog/2013/07/15/opera-user-agent-strings-opera-15-and-beyond |title=Opera User Agent Strings: Opera 15 and Beyond |publisher=dev.opera.com |date=15 July 2013 |accessdate=2014-05-05}}</ref> Opera's User-Agent string begins with "Mozilla/5.0" and, to avoid encountering legacy server rules, no longer includes the word "Opera" (instead using the string "OPR" to denote the Opera version).

===Format for automated agents (bots) ===
Automated web crawling tools can use a simplified form, where an important field is contact information in case of problems.  By convention the word "bot" is included in the name of the agent.<ref>[https://www.rankwatch.com/blog/handle-bot-herding-and-spider-wrangling-for-rankings/ "https://www.rankwatch.com/blog/handle-bot-herding-and-spider-wrangling-for-rankings/"]</ref> For example:

 <nowiki>Googlebot/2.1 (+http://www.google.com/bot.html)</nowiki>

Automated agents are expected to follow rules in a special file called "[[robots.txt]]".

===User agent spoofing=== <!-- courtesy note per [[WP:RESECT]]: [[User agent spoofing]] links here -->
The popularity of various Web browser products has varied throughout the Web's history, and this has influenced the design of websites in such a way that websites are sometimes designed to work well only with particular browsers, rather than according to uniform standards by the [[World Wide Web Consortium]] (W3C) or the [[Internet Engineering Task Force]] (IETF). Websites often include code to detect browser version to adjust the page design sent according to the user agent string received. This may mean that less-popular browsers are not sent complex content (even though they might be able to deal with it correctly) or, in extreme cases, refused all content.<ref>[http://www.anybrowser.org/campaign/ Burstein complaining "...&nbsp;I've been rejected until I come back with Netscape"]</ref> Thus, various browsers have a feature to ''cloak'' or ''spoof'' their identification to force certain server-side content. For example, the Android browser identifies itself as [[Safari (web browser)|Safari]] (among other things) in order to aid compatibility.<ref>{{cite web|url=http://androidcommunity.com/forums/f8/android-browser-reports-itself-as-apple-safari-4701/ |title=Android Browser Reports Itself as Apple Safari |accessdate=August 9, 2011 |url-status=dead |archiveurl=https://web.archive.org/web/20110806170335/http://androidcommunity.com/forums/f8/android-browser-reports-itself-as-apple-safari-4701/ |archivedate=August 6, 2011 }}</ref><ref>{{cite web|title=User Agent String explained: Android Webkit Browser|url=http://www.useragentstring.com/Android%20Webkit%20Browser_id_18070.php|publisher=UserAgentString.com|accessdate=29 July 2012|quote=Mozilla/5.0 (Linux; U; Android 2.2; en-sa; HTC_DesireHD_A9191 Build/FRF91) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1}}</ref>

Other HTTP client programs, like [[download manager]]s and [[offline browser]]s, often have the ability to change the user agent string.

[[Spam bots]] and [[Web scrapers]] often use fake user agents.

A result of user agent spoofing may be that collected [[Usage share of web browsers|statistics of Web browser usage]] are inaccurate.

===User agent sniffing===
{{main article|Browser sniffing}}
''User agent sniffing'' is the practice of websites showing different or adjusted content when viewed with certain user agents. An example of this is [[Microsoft Exchange Server]] 2003's Outlook Web Access feature. When viewed with Internet Explorer 6 or newer, more functionality is displayed compared to the same page in any other browsers. User agent sniffing is considered poor practice, since it encourages browser-specific design and penalizes new browsers with unrecognized user agent identifications. Instead, the W3C recommends creating standard HTML markup,<ref name=www.w3.org>{{cite web|last=Pemberton|first=Stephen|title=W3C Markup Validation Service|url=http://www.w3.org/MarkUp/#guidelines|publisher=W3C|accessdate=2011-10-18}}</ref>  allowing correct rendering in as many browsers as possible, and to test for specific browser features rather than particular browser versions or brands.<ref>{{cite web|title=Browser Detection and Cross Browser Support|url=https://developer.mozilla.org/en/Browser_Detection_and_Cross_Browser_Support|work=[[Mozilla Developer Center]]|publisher=[[Mozilla]]|first=Bob|last=Clary|date=10 February 2003|accessdate=2009-05-30}}</ref>

Websites intended for display by mobile phones often rely on user agent sniffing, since [[mobile browser]]s often differ greatly from each other.

===Encryption strength notations===
Web browsers created in the United States, such as [[Netscape Navigator]] and [[Internet Explorer]], previously used the letters U, I, and N to specify the [[encryption]] strength in the user agent string. Until 1996, when the United States government disallowed encryption with keys longer than 40&nbsp;bits to be exported, vendors shipped various browser versions with different encryption strengths. "U" stands for "USA" (for the version with 128-bit encryption), "I" stands for "International"{{snd}} the browser has 40-bit encryption and can be used anywhere in the world{{snd}} and "N" stands (''de facto'') for "None" (no encryption).<ref name=zawinski-old>{{cite web
| url = https://www-archive.mozilla.org/build/user-agent-strings.html
| title = user-agent strings (obsolete)
| first = Jamie
| last = Zawinski
| date = 28 March 1998
| accessdate = 2010-01-08
| publisher = mozilla.org
}}</ref> Following the lifting of [[export of cryptography in the United States#PC era|export restrictions]], most vendors supported 256-bit encryption.

===Deprecation of User-Agent header===
In 2020, [[Google]] announced that they would be phasing out support for the User-Agent header in their [[Google Chrome]] browser. They stated that other major web browser vendors were supportive of the move, but that they did not know when other vendors would follow suit.<ref>{{Cite web|url=https://www.infoq.com/news/2020/03/chrome-phasing-user-agent/|title=Chrome Phasing out Support for User Agent|website=InfoQ|access-date=2020-03-25}}</ref> Google stated that a new feature called [[Client Hints]] would replace the functionality of the User-Agent string.<ref>{{Cite web|url=https://www.zdnet.com/article/google-to-phase-out-user-agent-strings-in-chrome/|title=Google to phase out user-agent strings in Chrome|last=Cimpanu|first=Catalin|website=ZDNet|language=en|access-date=2020-03-25}}</ref>

==See also==
* [[Robots exclusion standard]]
* [[Web crawler]]
* [[WURFL|Wireless Universal Resource File (WURFL)]]
* [[UAProf|User Agent Profile (UAProf)]]
* [[Browser sniffing]]
* [[Web browser engine]]

==References==
{{Reflist}}

<!-- not used: ==External links== -->

{{DEFAULTSORT:User Agent}}
[[Category:Clients (computing)]]
[[Category:Hypertext Transfer Protocol headers]]
