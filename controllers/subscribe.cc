#include "subscribe.h"

void subscribe::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
  LOG_INFO << "Subscription Page reached.";
  std::string email = req->getParameter("newsletter1");

  auto clientPtr = drogon::app().getDbClient();
  clientPtr->execSqlAsync("INSERT INTO Leads (emailLeads) VALUES (?)",
                            [callback](const drogon::orm::Result &result) {
			      HttpResponsePtr resp = HttpResponse::newHttpResponse();
			      resp->setBody("<script>window.location.href = \"/\";</script>");
			      return callback(resp);
                            },
			  [](const drogon::orm::DrogonDbException &e) {
                                std::cerr << "error:" << e.base().what() << std::endl;
                            },
			  email);
}
