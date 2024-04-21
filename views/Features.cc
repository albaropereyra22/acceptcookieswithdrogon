//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "Features.h"
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
std::string Features::genText(const DrTemplateData& Features_view_data)
{
	drogon::OStringStream Features_tmp_stream;
	std::string layoutName{""};
	Features_tmp_stream << "<!DOCTYPE html>\n";
	Features_tmp_stream << "<html lang=\"en\">\n";
	Features_tmp_stream << "  <head>\n";
	Features_tmp_stream << "      <meta charset=\"utf-8\">\n";
	Features_tmp_stream << "      <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n";
	Features_tmp_stream << "      <meta name=\"description\" content=\"This is an example website.\">\n";
	Features_tmp_stream << "	  <title>Welcome to our website fellow internet browser</title>\n";
	Features_tmp_stream << "	  \n";
	Features_tmp_stream << "	          <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">\n";
	Features_tmp_stream << "		    </head>\n";
	Features_tmp_stream << "  <body>\n";
	Features_tmp_stream << "    <div class=\"container\">\n";
	Features_tmp_stream << "    <header class=\"d-flex flex-wrap align-items-center justify-content-center justify-content-md-between py-3 mb-4 border-bottom\">\n";
	Features_tmp_stream << "      <div class=\"col-md-3 mb-2 mb-md-0\">\n";
	Features_tmp_stream << "        <a href=\"/\" class=\"d-inline-flex link-body-emphasis text-decoration-none\">\n";
	Features_tmp_stream << "          <svg class=\"bi\" width=\"40\" height=\"32\" role=\"img\" aria-label=\"Bootstrap\"><use xlink:href=\"#bootstrap\"></use></svg>\n";
	Features_tmp_stream << "        </a>\n";
	Features_tmp_stream << "      </div>\n";
Features_tmp_stream<<"\n";
	Features_tmp_stream << "      <ul class=\"nav col-12 col-md-auto mb-2 justify-content-center mb-md-0\">\n";
	Features_tmp_stream << "        <li><a href=\"/\" class=\"nav-link px-2 link-secondary\">Home</a></li>\n";
	Features_tmp_stream << "        <li><a href=\"/features\" class=\"nav-link px-2\">Features</a></li>\n";
	Features_tmp_stream << "        <li><a href=\"/pricing\" class=\"nav-link px-2\">Pricing</a></li>\n";
	Features_tmp_stream << "        <li><a href=\"/faqs\" class=\"nav-link px-2\">FAQs</a></li>\n";
	Features_tmp_stream << "        <li><a href=\"/about\" class=\"nav-link px-2\">About</a></li>\n";
	Features_tmp_stream << "      </ul>\n";
Features_tmp_stream<<"\n";
	Features_tmp_stream << "      <div class=\"col-md-3 text-end\">\n";
	Features_tmp_stream << "        <button type=\"button\" class=\"btn btn-outline-primary me-2\">Login</button>\n";
	Features_tmp_stream << "        <button type=\"button\" class=\"btn btn-primary\">Sign-up</button>\n";
	Features_tmp_stream << "      </div>\n";
	Features_tmp_stream << "    </header>\n";
	Features_tmp_stream << "    </div>\n";
	Features_tmp_stream << "    <div class=\"container my-5\" >\n";
	Features_tmp_stream << "    <div class=\"p-5 text-center bg-body-tertiary rounded-3\">\n";
	Features_tmp_stream << "    <svg class=\"bi mt-4 mb-3\" style=\"color: var(--bs-indigo);\" width=\"100\" height=\"100\"><use xlink:href=\"#bootstrap\"></use></svg>\n";
	Features_tmp_stream << "    <h1 class=\"text-body-emphasis\">Jumbotron with icon</h1>\n";
	Features_tmp_stream << "    <p class=\"col-lg-8 mx-auto fs-5 text-muted\">\n";
	Features_tmp_stream << "      This is a custom jumbotron featuring an SVG image at the top, some longer text that wraps early thanks to a responsive <code>.col-*</code> class, and a customized call to action.\n";
	Features_tmp_stream << "    </p>\n";
	Features_tmp_stream << "    <div class=\"d-inline-flex gap-2 mb-5\">\n";
	Features_tmp_stream << "      <button class=\"d-inline-flex align-items-center btn btn-primary btn-lg px-4 rounded-pill\" type=\"button\">\n";
	Features_tmp_stream << "        Call to action\n";
	Features_tmp_stream << "        <svg class=\"bi ms-2\" width=\"24\" height=\"24\"><use xlink:href=\"#arrow-right-short\"></use></svg>\n";
	Features_tmp_stream << "      </button>\n";
	Features_tmp_stream << "      <button class=\"btn btn-outline-secondary btn-lg px-4 rounded-pill\" type=\"button\">\n";
	Features_tmp_stream << "        Secondary link\n";
	Features_tmp_stream << "      </button>\n";
	Features_tmp_stream << "    </div>\n";
	Features_tmp_stream << "  </div>\n";
	Features_tmp_stream << "    </div>\n";
Features_tmp_stream<<"\n";
	Features_tmp_stream << "    <div class=\"container\">\n";
	Features_tmp_stream << "  <footer class=\"py-5\">\n";
	Features_tmp_stream << "    <div class=\"row\">\n";
	Features_tmp_stream << "      <div class=\"col-2\">\n";
	Features_tmp_stream << "        <h5>Section</h5>\n";
	Features_tmp_stream << "        <ul class=\"nav flex-column\">\n";
	Features_tmp_stream << "          <li class=\"nav-item mb-2\"><a href=\"#\" class=\"nav-link p-0 text-muted\">Home</a></li>\n";
	Features_tmp_stream << "          <li class=\"nav-item mb-2\"><a href=\"#\" class=\"nav-link p-0 text-muted\">Features</a></li>\n";
	Features_tmp_stream << "          <li class=\"nav-item mb-2\"><a href=\"#\" class=\"nav-link p-0 text-muted\">Pricing</a></li>\n";
	Features_tmp_stream << "          <li class=\"nav-item mb-2\"><a href=\"#\" class=\"nav-link p-0 text-muted\">FAQs</a></li>\n";
	Features_tmp_stream << "          <li class=\"nav-item mb-2\"><a href=\"#\" class=\"nav-link p-0 text-muted\">About</a></li>\n";
	Features_tmp_stream << "        </ul>\n";
	Features_tmp_stream << "      </div>\n";
	Features_tmp_stream << "      <div class=\"col-2\">\n";
	Features_tmp_stream << "      </div>\n";
	Features_tmp_stream << "      <div class=\"col-2\">\n";
	Features_tmp_stream << "      </div>\n";
	Features_tmp_stream << "  \n";
	Features_tmp_stream << "      <div class=\"col-4 offset-1\">\n";
	Features_tmp_stream << "        <form>\n";
	Features_tmp_stream << "          <h5>Subscribe to our newsletter</h5>\n";
	Features_tmp_stream << "          <p>Monthly digest of whats new and exciting from us.</p>\n";
	Features_tmp_stream << "          <div class=\"d-flex w-100 gap-2\">\n";
	Features_tmp_stream << "            <label for=\"newsletter1\" class=\"visually-hidden\">Email address</label>\n";
	Features_tmp_stream << "            <input id=\"newsletter1\" type=\"text\" class=\"form-control\" placeholder=\"Email address\" control-id=\"ControlID-1\">\n";
	Features_tmp_stream << "            <button class=\"btn btn-primary\" type=\"button\" control-id=\"ControlID-2\">Subscribe</button>\n";
	Features_tmp_stream << "          </div>\n";
	Features_tmp_stream << "        </form>\n";
	Features_tmp_stream << "      </div>\n";
	Features_tmp_stream << "    </div>\n";
Features_tmp_stream<<"\n";
	Features_tmp_stream << "    <div class=\"d-flex justify-content-between py-4 my-4 border-top\">\n";
	Features_tmp_stream << "      <p>© 2024 Company, Inc. All rights reserved.</p>\n";
	Features_tmp_stream << "      <ul class=\"list-unstyled d-flex\">\n";
	Features_tmp_stream << "        <li class=\"ms-3\"><a class=\"link-dark\" href=\"#\"><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#twitter\"></use></svg></a></li>\n";
	Features_tmp_stream << "        <li class=\"ms-3\"><a class=\"link-dark\" href=\"#\"><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#instagram\"></use></svg></a></li>\n";
	Features_tmp_stream << "        <li class=\"ms-3\"><a class=\"link-dark\" href=\"#\"><svg class=\"bi\" width=\"24\" height=\"24\"><use xlink:href=\"#facebook\"></use></svg></a></li>\n";
	Features_tmp_stream << "      </ul>\n";
	Features_tmp_stream << "    </div>\n";
	Features_tmp_stream << "  </footer>\n";
	Features_tmp_stream << "</div>\n";
Features_tmp_stream<<"\n";
	Features_tmp_stream << "      <script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz\" crossorigin=\"anonymous\"></script>\n";
	Features_tmp_stream << "</body>\n";
	Features_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(Features_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = Features_view_data;
auto str = std::move(Features_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
