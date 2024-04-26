#include "faq.h"

void faq::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
  LOG_INFO << "FAQ page reached.";
  HttpResponsePtr resp;
  resp = HttpResponse::newHttpViewResponse("FAQ.csp");
  callback(resp);

}
