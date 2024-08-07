//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "FAQ.h"
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
std::string FAQ::genText(const DrTemplateData& FAQ_view_data)
{
	drogon::OStringStream FAQ_tmp_stream;
	std::string layoutName{""};
	FAQ_tmp_stream << "<!DOCTYPE html>\n";
	FAQ_tmp_stream << "<html lang=\"en\">\n";
	FAQ_tmp_stream << "  <head>\n";
	FAQ_tmp_stream << "      <meta charset=\"utf-8\">\n";
	FAQ_tmp_stream << "      <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n";
	FAQ_tmp_stream << "      <meta name=\"description\" content=\"Here is a list of our frequently asked questions.\">\n";
	FAQ_tmp_stream << "      <title>FAQs Here is a list of our Frequently Asked Questions</title>\n";
	FAQ_tmp_stream << "      <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">\n";
	FAQ_tmp_stream << "  </head>\n";
	FAQ_tmp_stream << "  <body>\n";
	FAQ_tmp_stream << "    ";
{
    auto templ=DrTemplateBase::newTemplate("Header.csp");
    if(templ){
      FAQ_tmp_stream<< templ->genText(FAQ_view_data);
    }
}
FAQ_tmp_stream<<"\n";
	FAQ_tmp_stream << "    <div class=\"container\">\n";
	FAQ_tmp_stream << "    <h1> Here is a list of Frequently asked questions.</h1>\n";
	FAQ_tmp_stream << "    <p><h3>How does it work?</h3></br>\n";
	FAQ_tmp_stream << "      simply login enter the URL you want to be shortened into the text box.  wait for the short URL and share.</p>\n";
	FAQ_tmp_stream << "    <p><h3>Why do I have to login?</h3></br>\n";
	FAQ_tmp_stream << "      We want to provide a custom solution for every user. We want to keep your history of usage.</p>\n";
	FAQ_tmp_stream << "    <p><h3>How much is it?</h3></br>\n";
	FAQ_tmp_stream << "      We offer a Freemium service, first few links are free.</p>\n";
	FAQ_tmp_stream << "    <p><h3>Is this really the fastest URL shortner?</h3></br>\n";
	FAQ_tmp_stream << "      There are only two ways of making a faster website and no one has done it yet.  We use a fast web stack using c++.</p>\n";
	FAQ_tmp_stream << "      </div>\n";
	FAQ_tmp_stream << "    ";
{
    auto templ=DrTemplateBase::newTemplate("Footer.csp");
    if(templ){
      FAQ_tmp_stream<< templ->genText(FAQ_view_data);
    }
}
FAQ_tmp_stream<<"\n";
	FAQ_tmp_stream << "  <script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz\" crossorigin=\"anonymous\"></script>\n";
	FAQ_tmp_stream << "  </body>\n";
	FAQ_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(FAQ_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = FAQ_view_data;
auto str = std::move(FAQ_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
