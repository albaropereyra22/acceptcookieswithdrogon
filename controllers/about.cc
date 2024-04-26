#include "about.h"

void about::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
  LOG_INFO << "About page reached.";
  HttpResponsePtr resp;
  resp = HttpResponse::newHttpViewResponse("About.csp");
  callback(resp);

}
