//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "Pricing.h"
#include <drogon/utils/OStringStream.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <list>
#include <deque>
#include <queue>
using namespace drogon;
std::string Pricing::genText(const DrTemplateData& Pricing_view_data)
{
	drogon::OStringStream Pricing_tmp_stream;
	std::string layoutName{""};
	Pricing_tmp_stream << "<!DOCTYPE html>\n";
	Pricing_tmp_stream << "<html lang=\"en\">\n";
	Pricing_tmp_stream << "  <head>\n";
	Pricing_tmp_stream << "      <meta charset=\"utf-8\">\n";
	Pricing_tmp_stream << "      <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n";
	Pricing_tmp_stream << "      <meta name=\"description\" content=\"Check out our tiny URL pricing.\">\n";
	Pricing_tmp_stream << "      <title>Here is our tiny URL pricing</title>\n";
	Pricing_tmp_stream << "      <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">\n";
	Pricing_tmp_stream << "  </head>\n";
	Pricing_tmp_stream << "  <body>\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "    <style>\n";
	Pricing_tmp_stream << "      .bd-placeholder-img {\n";
	Pricing_tmp_stream << "	  font-size: 1.125rem;\n";
	Pricing_tmp_stream << "	  text-anchor: middle;\n";
	Pricing_tmp_stream << "	  -webkit-user-select: none;\n";
	Pricing_tmp_stream << "	  -moz-user-select: none;\n";
	Pricing_tmp_stream << "	  user-select: none;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      @media (min-width: 768px) {\n";
	Pricing_tmp_stream << "	  .bd-placeholder-img-lg {\n";
	Pricing_tmp_stream << "	      font-size: 3.5rem;\n";
	Pricing_tmp_stream << "	  }\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .b-example-divider {\n";
	Pricing_tmp_stream << "	  width: 100%;\n";
	Pricing_tmp_stream << "	  height: 3rem;\n";
	Pricing_tmp_stream << "	  background-color: rgba(0, 0, 0, .1);\n";
	Pricing_tmp_stream << "	  border: solid rgba(0, 0, 0, .15);\n";
	Pricing_tmp_stream << "	  border-width: 1px 0;\n";
	Pricing_tmp_stream << "	  box-shadow: inset 0 .5em 1.5em rgba(0, 0, 0, .1), inset 0 .125em .5em rgba(0, 0, 0, .15);\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .b-example-vr {\n";
	Pricing_tmp_stream << "	  flex-shrink: 0;\n";
	Pricing_tmp_stream << "	  width: 1.5rem;\n";
	Pricing_tmp_stream << "	  height: 100vh;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .bi {\n";
	Pricing_tmp_stream << "	  vertical-align: -.125em;\n";
	Pricing_tmp_stream << "	  fill: currentColor;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .nav-scroller {\n";
	Pricing_tmp_stream << "	  position: relative;\n";
	Pricing_tmp_stream << "	  z-index: 2;\n";
	Pricing_tmp_stream << "	  height: 2.75rem;\n";
	Pricing_tmp_stream << "	  overflow-y: hidden;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .nav-scroller .nav {\n";
	Pricing_tmp_stream << "	  display: flex;\n";
	Pricing_tmp_stream << "	  flex-wrap: nowrap;\n";
	Pricing_tmp_stream << "	  padding-bottom: 1rem;\n";
	Pricing_tmp_stream << "	  margin-top: -1px;\n";
	Pricing_tmp_stream << "	  overflow-x: auto;\n";
	Pricing_tmp_stream << "	  text-align: center;\n";
	Pricing_tmp_stream << "	  white-space: nowrap;\n";
	Pricing_tmp_stream << "	  -webkit-overflow-scrolling: touch;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .btn-bd-primary {\n";
	Pricing_tmp_stream << "	  --bd-violet-bg: #712cf9;\n";
	Pricing_tmp_stream << "	  --bd-violet-rgb: 112.520718, 44.062154, 249.437846;\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "	  --bs-btn-font-weight: 600;\n";
	Pricing_tmp_stream << "	  --bs-btn-color: var(--bs-white);\n";
	Pricing_tmp_stream << "	  --bs-btn-bg: var(--bd-violet-bg);\n";
	Pricing_tmp_stream << "	  --bs-btn-border-color: var(--bd-violet-bg);\n";
	Pricing_tmp_stream << "	  --bs-btn-hover-color: var(--bs-white);\n";
	Pricing_tmp_stream << "	  --bs-btn-hover-bg: #6528e0;\n";
	Pricing_tmp_stream << "	  --bs-btn-hover-border-color: #6528e0;\n";
	Pricing_tmp_stream << "	  --bs-btn-focus-shadow-rgb: var(--bd-violet-rgb);\n";
	Pricing_tmp_stream << "	  --bs-btn-active-color: var(--bs-btn-hover-color);\n";
	Pricing_tmp_stream << "	  --bs-btn-active-bg: #5a23c8;\n";
	Pricing_tmp_stream << "	  --bs-btn-active-border-color: #5a23c8;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .bd-mode-toggle {\n";
	Pricing_tmp_stream << "	  z-index: 1500;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .bd-mode-toggle .dropdown-menu .active .bi {\n";
	Pricing_tmp_stream << "	  display: block !important;\n";
	Pricing_tmp_stream << "      }\n";
	Pricing_tmp_stream << "      body {\n";
	Pricing_tmp_stream << "	  background-image: linear-gradient(180deg, var(--bs-secondary-bg), var(--bs-body-bg) 100px, var(--bs-body-bg));\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .container {\n";
	Pricing_tmp_stream << "	  max-width: 960px;\n";
	Pricing_tmp_stream << "      }\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "      .pricing-header {\n";
	Pricing_tmp_stream << "	  max-width: 700px;\n";
	Pricing_tmp_stream << "      }\n";
	Pricing_tmp_stream << "    </style>\n";
	Pricing_tmp_stream << "</head>\n";
	Pricing_tmp_stream << "<body>\n";
	Pricing_tmp_stream << "<svg xmlns=\"http://www.w3.org/2000/svg\" class=\"d-none\">\n";
	Pricing_tmp_stream << "<symbol id=\"check2\" viewBox=\"0 0 16 16\">\n";
	Pricing_tmp_stream << "<path d=\"M13.854 3.646a.5.5 0 0 1 0 .708l-7 7a.5.5 0 0 1-.708 0l-3.5-3.5a.5.5 0 1 1 .708-.708L6.5 10.293l6.646-6.647a.5.5 0 0 1 .708 0z\"/>\n";
	Pricing_tmp_stream << "</symbol>\n";
	Pricing_tmp_stream << "<symbol id=\"circle-half\" viewBox=\"0 0 16 16\">\n";
	Pricing_tmp_stream << "<path d=\"M8 15A7 7 0 1 0 8 1v14zm0 1A8 8 0 1 1 8 0a8 8 0 0 1 0 16z\"/>\n";
	Pricing_tmp_stream << "</symbol>\n";
	Pricing_tmp_stream << "<symbol id=\"moon-stars-fill\" viewBox=\"0 0 16 16\">\n";
	Pricing_tmp_stream << "<path d=\"M6 .278a.768.768 0 0 1 .08.858 7.208 7.208 0 0 0-.878 3.46c0 4.021 3.278 7.277 7.318 7.277.527 0 1.04-.055 1.533-.16a.787.787 0 0 1 .81.316.733.733 0 0 1-.031.893A8.349 8.349 0 0 1 8.344 16C3.734 16 0 12.286 0 7.71 0 4.266 2.114 1.312 5.124.06A.752.752 0 0 1 6 .278z\"/>\n";
	Pricing_tmp_stream << "<path d=\"M10.794 3.148a.217.217 0 0 1 .412 0l.387 1.162c.173.518.579.924 1.097 1.097l1.162.387a.217.217 0 0 1 0 .412l-1.162.387a1.734 1.734 0 0 0-1.097 1.097l-.387 1.162a.217.217 0 0 1-.412 0l-.387-1.162A1.734 1.734 0 0 0 9.31 6.593l-1.162-.387a.217.217 0 0 1 0-.412l1.162-.387a1.734 1.734 0 0 0 1.097-1.097l.387-1.162zM13.863.099a.145.145 0 0 1 .274 0l.258.774c.115.346.386.617.732.732l.774.258a.145.145 0 0 1 0 .274l-.774.258a1.156 1.156 0 0 0-.732.732l-.258.774a.145.145 0 0 1-.274 0l-.258-.774a1.156 1.156 0 0 0-.732-.732l-.774-.258a.145.145 0 0 1 0-.274l.774-.258c.346-.115.617-.386.732-.732L13.863.1z\"/>\n";
	Pricing_tmp_stream << "</symbol>\n";
	Pricing_tmp_stream << "<symbol id=\"sun-fill\" viewBox=\"0 0 16 16\">\n";
	Pricing_tmp_stream << "<path d=\"M8 12a4 4 0 1 0 0-8 4 4 0 0 0 0 8zM8 0a.5.5 0 0 1 .5.5v2a.5.5 0 0 1-1 0v-2A.5.5 0 0 1 8 0zm0 13a.5.5 0 0 1 .5.5v2a.5.5 0 0 1-1 0v-2A.5.5 0 0 1 8 13zm8-5a.5.5 0 0 1-.5.5h-2a.5.5 0 0 1 0-1h2a.5.5 0 0 1 .5.5zM3 8a.5.5 0 0 1-.5.5h-2a.5.5 0 0 1 0-1h2A.5.5 0 0 1 3 8zm10.657-5.657a.5.5 0 0 1 0 .707l-1.414 1.415a.5.5 0 1 1-.707-.708l1.414-1.414a.5.5 0 0 1 .707 0zm-9.193 9.193a.5.5 0 0 1 0 .707L3.05 13.657a.5.5 0 0 1-.707-.707l1.414-1.414a.5.5 0 0 1 .707 0zm9.193 2.121a.5.5 0 0 1-.707 0l-1.414-1.414a.5.5 0 0 1 .707-.707l1.414 1.414a.5.5 0 0 1 0 .707zM4.464 4.465a.5.5 0 0 1-.707 0L2.343 3.05a.5.5 0 1 1 .707-.707l1.414 1.414a.5.5 0 0 1 0 .708z\"/>\n";
	Pricing_tmp_stream << "</symbol>\n";
	Pricing_tmp_stream << "</svg>\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "<div class=\"dropdown position-fixed bottom-0 end-0 mb-3 me-3 bd-mode-toggle\">\n";
	Pricing_tmp_stream << "<button class=\"btn btn-bd-primary py-2 dropdown-toggle d-flex align-items-center\"\n";
	Pricing_tmp_stream << "id=\"bd-theme\"\n";
	Pricing_tmp_stream << "type=\"button\"\n";
	Pricing_tmp_stream << "aria-expanded=\"false\"\n";
	Pricing_tmp_stream << "data-bs-toggle=\"dropdown\"\n";
	Pricing_tmp_stream << "aria-label=\"Toggle theme (auto)\">\n";
	Pricing_tmp_stream << "<svg class=\"bi my-1 theme-icon-active\" width=\"1em\" height=\"1em\"><use href=\"#circle-half\"></use></svg>\n";
	Pricing_tmp_stream << "<span class=\"visually-hidden\" id=\"bd-theme-text\">Toggle theme</span>\n";
	Pricing_tmp_stream << "</button>\n";
	Pricing_tmp_stream << "<ul class=\"dropdown-menu dropdown-menu-end shadow\" aria-labelledby=\"bd-theme-text\">\n";
	Pricing_tmp_stream << "<li>\n";
	Pricing_tmp_stream << "<button type=\"button\" class=\"dropdown-item d-flex align-items-center\" data-bs-theme-value=\"light\" aria-pressed=\"false\">\n";
	Pricing_tmp_stream << "<svg class=\"bi me-2 opacity-50\" width=\"1em\" height=\"1em\"><use href=\"#sun-fill\"></use></svg>\n";
	Pricing_tmp_stream << "Light\n";
	Pricing_tmp_stream << "<svg class=\"bi ms-auto d-none\" width=\"1em\" height=\"1em\"><use href=\"#check2\"></use></svg>\n";
	Pricing_tmp_stream << "</button>\n";
	Pricing_tmp_stream << "</li>\n";
	Pricing_tmp_stream << "<li>\n";
	Pricing_tmp_stream << "<button type=\"button\" class=\"dropdown-item d-flex align-items-center\" data-bs-theme-value=\"dark\" aria-pressed=\"false\">\n";
	Pricing_tmp_stream << "<svg class=\"bi me-2 opacity-50\" width=\"1em\" height=\"1em\"><use href=\"#moon-stars-fill\"></use></svg>\n";
	Pricing_tmp_stream << "Dark\n";
	Pricing_tmp_stream << "<svg class=\"bi ms-auto d-none\" width=\"1em\" height=\"1em\"><use href=\"#check2\"></use></svg>\n";
	Pricing_tmp_stream << "</button>\n";
	Pricing_tmp_stream << "</li>\n";
	Pricing_tmp_stream << "<li>\n";
	Pricing_tmp_stream << "<button type=\"button\" class=\"dropdown-item d-flex align-items-center active\" data-bs-theme-value=\"auto\" aria-pressed=\"true\">\n";
	Pricing_tmp_stream << "<svg class=\"bi me-2 opacity-50\" width=\"1em\" height=\"1em\"><use href=\"#circle-half\"></use></svg>\n";
	Pricing_tmp_stream << "Auto\n";
	Pricing_tmp_stream << "<svg class=\"bi ms-auto d-none\" width=\"1em\" height=\"1em\"><use href=\"#check2\"></use></svg>\n";
	Pricing_tmp_stream << "</button>\n";
	Pricing_tmp_stream << "</li>\n";
	Pricing_tmp_stream << "</ul>\n";
	Pricing_tmp_stream << "</div>\n";
Pricing_tmp_stream<<"\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "<svg xmlns=\"http://www.w3.org/2000/svg\" class=\"d-none\">\n";
	Pricing_tmp_stream << "<symbol id=\"check\" viewBox=\"0 0 16 16\">\n";
	Pricing_tmp_stream << "<title>Check</title>\n";
	Pricing_tmp_stream << "<path d=\"M13.854 3.646a.5.5 0 0 1 0 .708l-7 7a.5.5 0 0 1-.708 0l-3.5-3.5a.5.5 0 1 1 .708-.708L6.5 10.293l6.646-6.647a.5.5 0 0 1 .708 0z\"/>\n";
	Pricing_tmp_stream << "</symbol>\n";
	Pricing_tmp_stream << "</svg>\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "  \n";
	Pricing_tmp_stream << "    ";
{
    auto templ=DrTemplateBase::newTemplate("Header.csp");
    if(templ){
      Pricing_tmp_stream<< templ->genText(Pricing_view_data);
    }
}
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "<div class=\"pricing-header p-3 pb-md-4 mx-auto text-center\">\n";
	Pricing_tmp_stream << "      <h1 class=\"display-4 fw-normal text-body-emphasis\">Pricing</h1>\n";
	Pricing_tmp_stream << "      <p class=\"fs-5 text-body-secondary\">Quickly build an effective pricing table for your potential customers with this Bootstrap example. It’s built with default Bootstrap components and utilities with little customization.</p>\n";
	Pricing_tmp_stream << "</div>\n";
	Pricing_tmp_stream << "<div class=\"container py-3\">\n";
	Pricing_tmp_stream << "<main>\n";
	Pricing_tmp_stream << "    <div class=\"row row-cols-1 row-cols-md-3 mb-3 text-center\">\n";
	Pricing_tmp_stream << "      <div class=\"col\">\n";
	Pricing_tmp_stream << "        <div class=\"card mb-4 rounded-3 shadow-sm\">\n";
	Pricing_tmp_stream << "          <div class=\"card-header py-3\">\n";
	Pricing_tmp_stream << "            <h4 class=\"my-0 fw-normal\">Free</h4>\n";
	Pricing_tmp_stream << "          </div>\n";
	Pricing_tmp_stream << "          <div class=\"card-body\">\n";
	Pricing_tmp_stream << "            <h1 class=\"card-title pricing-card-title\">$0<small class=\"text-body-secondary fw-light\">/mo</small></h1>\n";
	Pricing_tmp_stream << "            <ul class=\"list-unstyled mt-3 mb-4\">\n";
	Pricing_tmp_stream << "              <li>10 users included</li>\n";
	Pricing_tmp_stream << "              <li>2 GB of storage</li>\n";
	Pricing_tmp_stream << "              <li>Email support</li>\n";
	Pricing_tmp_stream << "              <li>Help center access</li>\n";
	Pricing_tmp_stream << "            </ul>\n";
	Pricing_tmp_stream << "            <button type=\"button\" class=\"w-100 btn btn-lg btn-outline-primary\">Sign up for free</button>\n";
	Pricing_tmp_stream << "          </div>\n";
	Pricing_tmp_stream << "        </div>\n";
	Pricing_tmp_stream << "      </div>\n";
	Pricing_tmp_stream << "      <div class=\"col\">\n";
	Pricing_tmp_stream << "        <div class=\"card mb-4 rounded-3 shadow-sm\">\n";
	Pricing_tmp_stream << "          <div class=\"card-header py-3\">\n";
	Pricing_tmp_stream << "            <h4 class=\"my-0 fw-normal\">Pro</h4>\n";
	Pricing_tmp_stream << "          </div>\n";
	Pricing_tmp_stream << "          <div class=\"card-body\">\n";
	Pricing_tmp_stream << "            <h1 class=\"card-title pricing-card-title\">$15<small class=\"text-body-secondary fw-light\">/mo</small></h1>\n";
	Pricing_tmp_stream << "            <ul class=\"list-unstyled mt-3 mb-4\">\n";
	Pricing_tmp_stream << "              <li>20 users included</li>\n";
	Pricing_tmp_stream << "              <li>10 GB of storage</li>\n";
	Pricing_tmp_stream << "              <li>Priority email support</li>\n";
	Pricing_tmp_stream << "              <li>Help center access</li>\n";
	Pricing_tmp_stream << "            </ul>\n";
	Pricing_tmp_stream << "            <button type=\"button\" class=\"w-100 btn btn-lg btn-primary\">Get started</button>\n";
	Pricing_tmp_stream << "          </div>\n";
	Pricing_tmp_stream << "        </div>\n";
	Pricing_tmp_stream << "      </div>\n";
	Pricing_tmp_stream << "      <div class=\"col\">\n";
	Pricing_tmp_stream << "        <div class=\"card mb-4 rounded-3 shadow-sm border-primary\">\n";
	Pricing_tmp_stream << "          <div class=\"card-header py-3 text-bg-primary border-primary\">\n";
	Pricing_tmp_stream << "            <h4 class=\"my-0 fw-normal\">Enterprise</h4>\n";
	Pricing_tmp_stream << "          </div>\n";
	Pricing_tmp_stream << "          <div class=\"card-body\">\n";
	Pricing_tmp_stream << "            <h1 class=\"card-title pricing-card-title\">$29<small class=\"text-body-secondary fw-light\">/mo</small></h1>\n";
	Pricing_tmp_stream << "            <ul class=\"list-unstyled mt-3 mb-4\">\n";
	Pricing_tmp_stream << "              <li>30 users included</li>\n";
	Pricing_tmp_stream << "              <li>15 GB of storage</li>\n";
	Pricing_tmp_stream << "              <li>Phone and email support</li>\n";
	Pricing_tmp_stream << "              <li>Help center access</li>\n";
	Pricing_tmp_stream << "            </ul>\n";
	Pricing_tmp_stream << "            <button type=\"button\" class=\"w-100 btn btn-lg btn-primary\">Contact us</button>\n";
	Pricing_tmp_stream << "          </div>\n";
	Pricing_tmp_stream << "        </div>\n";
	Pricing_tmp_stream << "      </div>\n";
	Pricing_tmp_stream << "    </div>\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "    <h2 class=\"display-6 text-center mb-4\">Compare plans</h2>\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "    <div class=\"table-responsive\">\n";
	Pricing_tmp_stream << "      <table class=\"table text-center\">\n";
	Pricing_tmp_stream << "        <thead>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th style=\"width: 34%;\"></th>\n";
	Pricing_tmp_stream << "            <th style=\"width: 22%;\">Free</th>\n";
	Pricing_tmp_stream << "            <th style=\"width: 22%;\">Pro</th>\n";
	Pricing_tmp_stream << "            <th style=\"width: 22%;\">Enterprise</th>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "        </thead>\n";
	Pricing_tmp_stream << "        <tbody>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th scope=\"row\" class=\"text-start\">Public</th>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th scope=\"row\" class=\"text-start\">Private</th>\n";
	Pricing_tmp_stream << "            <td></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "        </tbody>\n";
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "        <tbody>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th scope=\"row\" class=\"text-start\">Permissions</th>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th scope=\"row\" class=\"text-start\">Sharing</th>\n";
	Pricing_tmp_stream << "            <td></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th scope=\"row\" class=\"text-start\">Unlimited members</th>\n";
	Pricing_tmp_stream << "            <td></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "          <tr>\n";
	Pricing_tmp_stream << "            <th scope=\"row\" class=\"text-start\">Extra security</th>\n";
	Pricing_tmp_stream << "            <td></td>\n";
	Pricing_tmp_stream << "            <td></td>\n";
	Pricing_tmp_stream << "            <td><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#check\"></use></svg></td>\n";
	Pricing_tmp_stream << "          </tr>\n";
	Pricing_tmp_stream << "        </tbody>\n";
	Pricing_tmp_stream << "      </table>\n";
	Pricing_tmp_stream << "    </div>\n";
	Pricing_tmp_stream << "</main>\n";
	Pricing_tmp_stream << "</div>\n";
	Pricing_tmp_stream << "    ";
{
    auto templ=DrTemplateBase::newTemplate("Footer.csp");
    if(templ){
      Pricing_tmp_stream<< templ->genText(Pricing_view_data);
    }
}
Pricing_tmp_stream<<"\n";
	Pricing_tmp_stream << "  <script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz\" crossorigin=\"anonymous\"></script>\n";
	Pricing_tmp_stream << "  </body>\n";
	Pricing_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(Pricing_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = Pricing_view_data;
auto str = std::move(Pricing_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
