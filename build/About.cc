//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "About.h"
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
std::string About::genText(const DrTemplateData& About_view_data)
{
	drogon::OStringStream About_tmp_stream;
	std::string layoutName{""};
	About_tmp_stream << "<!DOCTYPE html>\n";
	About_tmp_stream << "<html lang=\"en\">\n";
	About_tmp_stream << "  <head>\n";
	About_tmp_stream << "      <meta charset=\"utf-8\">\n";
	About_tmp_stream << "      <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n";
	About_tmp_stream << "      <meta name=\"description\" content=\"Read about our product and learn more by reading what is on this awesome page.\">\n";
	About_tmp_stream << "      <title>Read about our product here</title>\n";
	About_tmp_stream << "      <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">\n";
	About_tmp_stream << "  </head>\n";
	About_tmp_stream << "  <body>\n";
	About_tmp_stream << "    ";
{
    auto templ=DrTemplateBase::newTemplate("Header.csp");
    if(templ){
      About_tmp_stream<< templ->genText(About_view_data);
    }
}
About_tmp_stream<<"\n";
	About_tmp_stream << "    \n";
	About_tmp_stream << "    ";
{
    auto templ=DrTemplateBase::newTemplate("Footer.csp");
    if(templ){
      About_tmp_stream<< templ->genText(About_view_data);
    }
}
About_tmp_stream<<"\n";
	About_tmp_stream << "  <script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz\" crossorigin=\"anonymous\"></script>\n";
	About_tmp_stream << "  </body>\n";
	About_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(About_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = About_view_data;
auto str = std::move(About_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
