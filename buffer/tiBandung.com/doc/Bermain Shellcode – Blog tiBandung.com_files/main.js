!function(){function r(){for(var e=this;-1===e.className.indexOf("nav-menu");)"li"===e.tagName.toLowerCase()&&(-1!==e.className.indexOf("focus")?e.className=e.className.replace(" focus",""):e.className+=" focus"),e=e.parentElement}var e,i,t,s,o;if(e=document.getElementById("site-navigation"),e&&(i=e.getElementsByTagName("button")[0],"undefined"!=typeof i)){if(t=e.getElementsByTagName("ul")[0],"undefined"==typeof t)return void(i.style.display="none");t.setAttribute("aria-expanded","false"),-1===t.className.indexOf("nav-menu")&&(t.className+=" nav-menu"),i.onclick=function(){-1!==e.className.indexOf("toggled")?(e.className=e.className.replace(" toggled",""),i.setAttribute("aria-expanded","false"),t.setAttribute("aria-expanded","false")):(e.className+=" toggled",i.setAttribute("aria-expanded","true"),t.setAttribute("aria-expanded","true"))},s=t.getElementsByTagName("a"),o=t.getElementsByTagName("ul");for(var n=0,l=o.length;l>n;n++)o[n].parentNode.setAttribute("aria-haspopup","true");for(n=0,l=s.length;l>n;n++)s[n].addEventListener("focus",r,!0),s[n].addEventListener("blur",r,!0)}}(),function(){var e=navigator.userAgent.toLowerCase().indexOf("webkit")>-1,i=navigator.userAgent.toLowerCase().indexOf("opera")>-1,t=navigator.userAgent.toLowerCase().indexOf("msie")>-1;(e||i||t)&&document.getElementById&&window.addEventListener&&window.addEventListener("hashchange",function(){var i,e=location.hash.substring(1);/^[A-z0-9_-]+$/.test(e)&&(i=document.getElementById(e),i&&(/^(?:a|select|input|button|textarea)$/i.test(i.tagName)||(i.tabIndex=-1),i.focus()))},!1)}(),jQuery(document).ready(function(e){var i=e(".main-navigation"),t=e("<div />",{"class":"filter-drop-spacer",height:i.outerHeight()});i.size()&&e(window).scroll(function(){!i.hasClass("fix")&&e(window).width()>767&&e(window).scrollTop()>i.offset().top?(i.before(t),i.addClass("fix")):i.hasClass("fix")&&e(window).scrollTop()<t.offset().top&&(i.removeClass("fix"),t.remove())})}),jQuery(document).ready(function(e){e("#smoothup").on("click",function(){return e("html, body").animate({scrollTop:0},"slow"),!1})});