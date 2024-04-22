#include "subscribe.h"

void subscribe::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    LOG_INFO << "Subscription Page reached.";
    HttpResponsePtr resp = HttpResponse::newHttpResponse();
  resp->setBody("<script>window.location.href = \"/\";</script>");
  callback(resp);

}
