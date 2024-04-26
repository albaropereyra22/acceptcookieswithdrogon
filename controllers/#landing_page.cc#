#include "landing_page.h"

void landing_page::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
  LOG_INFO << "Landing Page reached.";
  HttpResponsePtr resp = HttpResponse::newHttpResponse();
  req->session()->insert("acceptedCookies", true);
  resp->setBody("<script>window.location.href = \"/\";</script>");
  callback(resp);
}
