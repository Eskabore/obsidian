#  project
---
 
 ### Elements :
 
- [x] HTML 
- [ ] JavaScript 
- [x] CSS

	
---

Weeware[[<Weeware>]]
	
	
	
	
	
	      <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width-device-width, initial-scale=1.0">
    <title>Page Title</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
<div class="container">
        <div class="nav-wrapper">
            <div class="left-side">
                <div class="nav-link-wrapper">
                    <a href="index.html">Home</a>
                </div>
                <div class="nav-link-wrapper">
                    <a href="about.html">About</a>
                </div>
            </div>
            <div class="right-side">
                <div class="brand">
                    <div>KAKADI_&_NAZE</div>
            </div>
        </div>
        </div>
        <div class="content-wrapper">
            <div  class="portofolio-items-wrapper">

                <div class="portofolio-item-wrapper">
                    <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/jamie-hunt-8-KHxvuh2L8-unsplash.jpg)">
                    </div>
                      <div class="img-text-wrapper">
                           <div class="logo-wraper">
                              <img src="images/logo/weeware.png" alt="" class="logo">
                          </div>
                          <div class="subtitle">
                              We are BERLINERS !!!
                          </div>
                      </div>
                    </div>


            

            <div class="portofolio-item-wrapper">
                <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/mihail-macri-Ev0TwJS5Lh0-unsplash.jpg)"></div>
                  <div class="img-text-wrapper">
                      <div class="logo-wraper">
                          <img src="images/logo/weeware.png" alt="">
                      </div>
                      
                      <div class="subtitle">
                          Time for the REVOLUTION !!!
                      </div>

                  </div>
                </div>


        

        <div class="portofolio-item-wrapper">
            <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/Bukkinho.jpg)"></div>
            
              <div class="img-text-wrapper">
                  <div class="logo-wraper">
                      <img src="images/logo/weeware.png" alt="">
                  </div>
                  <div  class="subtitle">
                    Auf gegenseitigem RESPEKT !!!
                  </div>

              </div>
            </div>


    

    <div class="portofolio-item-wrapper">
        <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/alana-harris-iHsZTzt3f_8-unsplash.jpg)"></div>
        
          <div class="img-text-wrapper">
              <div class="logo-wraper">
                  <img src="images/logo/weeware.png" alt="">
              </div>
              <div  class="subtitle">
                  Peace_&_CALL US !!!
              </div>

          </div>
        </div>




    <div class="portofolio-item-wrapper">
    <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/Napolitano1.JPG)"></div>

    <div class="img-text-wrapper">
        <div class="logo-wraper">
            <img src="images/logo/weeware.png" alt="">
        </div>
        <div  class="subtitle">
            C'est GAGNE !!!
        </div>

    </div>
    </div>




    <div class="portofolio-item-wrapper">
    <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/jonas-tebbe-0lcW7bifr0o-unsplash.jpg)"></div>

    <div class="img-text-wrapper">
        <div class="logo-wraper">
            <img src="images/logo/weeware.png" alt="">
        </div>
        <div  class="subtitle">
            Antes y AHORA !!!
        </div>

    </div>
    </div>




    <div class="portofolio-item-wrapper">
    <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/twosteins.jpg)"></div>

    <div class="img-text-wrapper">
        <div class="logo-wraper">
        <img src="images/logo/weeware.png" alt="">
        </div>

        <div  class="subtitle">
            Plata Y KOKO !!!
    </div>
    </div>
    </div>




    <div class="portofolio-item-wrapper">
    <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/ian-stauffer-7nwC63497Zo-unsplash.jpg)"></div>

        <div class="img-text-wrapper">
        <div class="logo-wraper">
        <img src="images/logo/weeware.png" alt="">
        </div>
        <div  class="subtitle">
            Harry's UP !!!
        </div>
    </div>
    </div>




    <div class="portofolio-item-wrapper">
    <div class="portofolio-img-background" style="background-image:url(PhotosHD_BerlinUnsplash/miikka-airikkala-rd7RBGvs_-4-unsplash.jpg)"></div>

    <div class="img-text-wrapper">
        <div class="logo-wraper">
        <img src="images/logo/weeware.png" alt="">
        </div>
        <div  class="subtitle">
        We'd CARE !!!
        </div>

    </div>
    </div>


        </div>
        
    

</div>
</div>
<scr#pt>
    /*console.log,console.log, console.log...and console.log*/
    const portofolioItems = document.querySelectorAll('.portofolio-item-wrapper')

    portofolioItems.forEach(portofolioItem => {
        portofolioItem.addEventListener('mouseover', () => {
            console.log(portofolioItem.childNodes[1].classList);
            portofolioItem.childNodes[1].classList.add("img-darken");
        })
    })

portofolioItems.forEach(portofolioItem => {
            portofolioItem.addEventListener('mouseout', () => {
                console.log(portofolioItem.childNodes[1].classList);
                portofolioItem.childNodes[1].classList.remove("img-darken");
            })
        })

</scr#pt>
</b#dy>


</ht#l>
	```]
	