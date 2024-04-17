#include "cookies.h"

void cookies::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
  LOG_INFO << "Index page reached.";

  bool acceptedCookies =
    req->session()->getOptional<bool>("acceptedCookies").value_or(false);
  HttpResponsePtr resp;
  if(acceptedCookies == false)
    resp = HttpResponse::newHttpViewResponse("AcceptCookies.csp");
  else
    resp = HttpResponse::newHttpViewResponse("LandingPage.csp");
  callback(resp);

}
