//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "Header.h"
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
std::string Header::genText(const DrTemplateData& Header_view_data)
{
	drogon::OStringStream Header_tmp_stream;
	std::string layoutName{""};
	Header_tmp_stream << "<div class=\"container\">\n";
	Header_tmp_stream << "<header class=\"d-flex flex-wrap align-items-center justify-content-center justify-content-md-between py-3 mb-4 border-bottom\">\n";
	Header_tmp_stream << "<div class=\"col-md-3 mb-2 mb-md-0\">\n";
	Header_tmp_stream << "<a href=\"/\" class=\"d-inline-flex link-body-emphasis text-decoration-none\">\n";
	Header_tmp_stream << "<svg class=\"bi\" width=\"40\" height=\"32\" role=\"img\" aria-label=\"Bootstrap\"><use xlink:href=\"#bootstrap\"></use></svg>\n";
	Header_tmp_stream << "</a>\n";
	Header_tmp_stream << "</div>\n";
Header_tmp_stream<<"\n";
	Header_tmp_stream << "<ul class=\"nav col-12 col-md-auto mb-2 justify-content-center mb-md-0\">\n";
	Header_tmp_stream << "<li><a href=\"/\" class=\"nav-link px-2 link-secondary\">Home</a></li>\n";
	Header_tmp_stream << "<li><a href=\"/features\" class=\"nav-link px-2\">Features</a></li>\n";
	Header_tmp_stream << "<li><a href=\"/pricing\" class=\"nav-link px-2\">Pricing</a></li>\n";
	Header_tmp_stream << "<li><a href=\"/faqs\" class=\"nav-link px-2\">FAQs</a></li>\n";
	Header_tmp_stream << "<li><a href=\"/about\" class=\"nav-link px-2\">About</a></li>\n";
	Header_tmp_stream << "</ul>\n";
Header_tmp_stream<<"\n";
	Header_tmp_stream << "<div class=\"col-md-3 text-end\">\n";
	Header_tmp_stream << "<button type=\"button\" class=\"btn btn-outline-primary me-2\">Login</button>\n";
	Header_tmp_stream << "<button type=\"button\" class=\"btn btn-primary\">Sign-up</button>\n";
	Header_tmp_stream << "</div>\n";
	Header_tmp_stream << "</header>\n";
	Header_tmp_stream << "</div>\n";
if(layoutName.empty())
{
std::string ret{std::move(Header_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = Header_view_data;
auto str = std::move(Header_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
