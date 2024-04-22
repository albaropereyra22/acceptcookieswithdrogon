#include "features.h"

void features::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    LOG_INFO << "Features Page reached.";
    HttpResponsePtr resp;
    resp = HttpResponse::newHttpViewResponse("Features.csp");
    callback(resp);

}
