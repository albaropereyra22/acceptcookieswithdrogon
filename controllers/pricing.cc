#include "pricing.h"

void pricing::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
  // write your application logic here
  LOG_INFO << "Pricing page reached.";
  HttpResponsePtr resp;
  resp = HttpResponse::newHttpViewResponse("Pricing.csp");
  callback(resp);

}
