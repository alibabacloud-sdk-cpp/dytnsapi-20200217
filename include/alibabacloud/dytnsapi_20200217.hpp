// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYTNSAPI20200217_H_
#define ALIBABACLOUD_DYTNSAPI20200217_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dytnsapi20200217 {
class DescribeEmptyNumberDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phone{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeEmptyNumberDetectRequest() {}

  explicit DescribeEmptyNumberDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeEmptyNumberDetectRequest() = default;
};
class DescribeEmptyNumberDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> number{};
  shared_ptr<string> status{};

  DescribeEmptyNumberDetectResponseBodyData() {}

  explicit DescribeEmptyNumberDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeEmptyNumberDetectResponseBodyData() = default;
};
class DescribeEmptyNumberDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeEmptyNumberDetectResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeEmptyNumberDetectResponseBody() {}

  explicit DescribeEmptyNumberDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeEmptyNumberDetectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEmptyNumberDetectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeEmptyNumberDetectResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEmptyNumberDetectResponseBody() = default;
};
class DescribeEmptyNumberDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEmptyNumberDetectResponseBody> body{};

  DescribeEmptyNumberDetectResponse() {}

  explicit DescribeEmptyNumberDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEmptyNumberDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEmptyNumberDetectResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEmptyNumberDetectResponse() = default;
};
class DescribePhoneNumberAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> numberType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> rate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAnalysisRequest() {}

  explicit DescribePhoneNumberAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (numberType) {
      res["NumberType"] = boost::any(*numberType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NumberType") != m.end() && !m["NumberType"].empty()) {
      numberType = make_shared<long>(boost::any_cast<long>(m["NumberType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisRequest() = default;
};
class DescribePhoneNumberAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> number{};

  DescribePhoneNumberAnalysisResponseBodyData() {}

  explicit DescribePhoneNumberAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBodyData() = default;
};
class DescribePhoneNumberAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribePhoneNumberAnalysisResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAnalysisResponseBody() {}

  explicit DescribePhoneNumberAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribePhoneNumberAnalysisResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePhoneNumberAnalysisResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribePhoneNumberAnalysisResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBody() = default;
};
class DescribePhoneNumberAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAnalysisResponseBody> body{};

  DescribePhoneNumberAnalysisResponse() {}

  explicit DescribePhoneNumberAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneNumberAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponse() = default;
};
class DescribePhoneNumberAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAttributeRequest() {}

  explicit DescribePhoneNumberAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeRequest() = default;
};
class DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<long> numberSegment{};
  shared_ptr<string> province{};

  DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute() {}

  explicit DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (numberSegment) {
      res["NumberSegment"] = boost::any(*numberSegment);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("NumberSegment") != m.end() && !m["NumberSegment"].empty()) {
      numberSegment = make_shared<long>(boost::any_cast<long>(m["NumberSegment"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute() = default;
};
class DescribePhoneNumberAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute> phoneNumberAttribute{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAttributeResponseBody() {}

  explicit DescribePhoneNumberAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNumberAttribute) {
      res["PhoneNumberAttribute"] = phoneNumberAttribute ? boost::any(phoneNumberAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumberAttribute") != m.end() && !m["PhoneNumberAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneNumberAttribute"].type()) {
        DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneNumberAttribute"]));
        phoneNumberAttribute = make_shared<DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeResponseBody() = default;
};
class DescribePhoneNumberAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAttributeResponseBody> body{};

  DescribePhoneNumberAttributeResponse() {}

  explicit DescribePhoneNumberAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneNumberAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAttributeResponse() = default;
};
class DescribePhoneNumberOnlineTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberOnlineTimeRequest() {}

  explicit DescribePhoneNumberOnlineTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeRequest() = default;
};
class DescribePhoneNumberOnlineTimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> verifyResult{};

  DescribePhoneNumberOnlineTimeResponseBodyData() {}

  explicit DescribePhoneNumberOnlineTimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeResponseBodyData() = default;
};
class DescribePhoneNumberOnlineTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberOnlineTimeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberOnlineTimeResponseBody() {}

  explicit DescribePhoneNumberOnlineTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberOnlineTimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberOnlineTimeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeResponseBody() = default;
};
class DescribePhoneNumberOnlineTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberOnlineTimeResponseBody> body{};

  DescribePhoneNumberOnlineTimeResponse() {}

  explicit DescribePhoneNumberOnlineTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneNumberOnlineTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberOnlineTimeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeResponse() = default;
};
class DescribePhoneNumberOperatorAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberOperatorAttributeRequest() {}

  explicit DescribePhoneNumberOperatorAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeRequest() = default;
};
class DescribePhoneNumberOperatorAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<long> numberSegment{};
  shared_ptr<string> province{};

  DescribePhoneNumberOperatorAttributeResponseBodyData() {}

  explicit DescribePhoneNumberOperatorAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (numberSegment) {
      res["NumberSegment"] = boost::any(*numberSegment);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("NumberSegment") != m.end() && !m["NumberSegment"].empty()) {
      numberSegment = make_shared<long>(boost::any_cast<long>(m["NumberSegment"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeResponseBodyData() = default;
};
class DescribePhoneNumberOperatorAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberOperatorAttributeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberOperatorAttributeResponseBody() {}

  explicit DescribePhoneNumberOperatorAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberOperatorAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberOperatorAttributeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeResponseBody() = default;
};
class DescribePhoneNumberOperatorAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberOperatorAttributeResponseBody> body{};

  DescribePhoneNumberOperatorAttributeResponse() {}

  explicit DescribePhoneNumberOperatorAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneNumberOperatorAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberOperatorAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeResponse() = default;
};
class DescribePhoneNumberResaleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> since{};

  DescribePhoneNumberResaleRequest() {}

  explicit DescribePhoneNumberResaleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (since) {
      res["Since"] = boost::any(*since);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Since") != m.end() && !m["Since"].empty()) {
      since = make_shared<string>(boost::any_cast<string>(m["Since"]));
    }
  }


  virtual ~DescribePhoneNumberResaleRequest() = default;
};
class DescribePhoneNumberResaleResponseBodyTwiceTelVerify : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<long> verifyResult{};

  DescribePhoneNumberResaleResponseBodyTwiceTelVerify() {}

  explicit DescribePhoneNumberResaleResponseBodyTwiceTelVerify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<long>(boost::any_cast<long>(m["VerifyResult"]));
    }
  }


  virtual ~DescribePhoneNumberResaleResponseBodyTwiceTelVerify() = default;
};
class DescribePhoneNumberResaleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePhoneNumberResaleResponseBodyTwiceTelVerify> twiceTelVerify{};

  DescribePhoneNumberResaleResponseBody() {}

  explicit DescribePhoneNumberResaleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (twiceTelVerify) {
      res["TwiceTelVerify"] = twiceTelVerify ? boost::any(twiceTelVerify->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TwiceTelVerify") != m.end() && !m["TwiceTelVerify"].empty()) {
      if (typeid(map<string, boost::any>) == m["TwiceTelVerify"].type()) {
        DescribePhoneNumberResaleResponseBodyTwiceTelVerify model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TwiceTelVerify"]));
        twiceTelVerify = make_shared<DescribePhoneNumberResaleResponseBodyTwiceTelVerify>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberResaleResponseBody() = default;
};
class DescribePhoneNumberResaleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberResaleResponseBody> body{};

  DescribePhoneNumberResaleResponse() {}

  explicit DescribePhoneNumberResaleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneNumberResaleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberResaleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberResaleResponse() = default;
};
class DescribePhoneNumberStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberStatusRequest() {}

  explicit DescribePhoneNumberStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberStatusRequest() = default;
};
class DescribePhoneNumberStatusResponseBodyPhoneStatus : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> serialId{};
  shared_ptr<string> status{};

  DescribePhoneNumberStatusResponseBodyPhoneStatus() {}

  explicit DescribePhoneNumberStatusResponseBodyPhoneStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (serialId) {
      res["SerialId"] = boost::any(*serialId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("SerialId") != m.end() && !m["SerialId"].empty()) {
      serialId = make_shared<string>(boost::any_cast<string>(m["SerialId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePhoneNumberStatusResponseBodyPhoneStatus() = default;
};
class DescribePhoneNumberStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribePhoneNumberStatusResponseBodyPhoneStatus> phoneStatus{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberStatusResponseBody() {}

  explicit DescribePhoneNumberStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneStatus) {
      res["PhoneStatus"] = phoneStatus ? boost::any(phoneStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneStatus") != m.end() && !m["PhoneStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneStatus"].type()) {
        DescribePhoneNumberStatusResponseBodyPhoneStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneStatus"]));
        phoneStatus = make_shared<DescribePhoneNumberStatusResponseBodyPhoneStatus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberStatusResponseBody() = default;
};
class DescribePhoneNumberStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberStatusResponseBody> body{};

  DescribePhoneNumberStatusResponse() {}

  explicit DescribePhoneNumberStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePhoneNumberStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberStatusResponse() = default;
};
class InvalidPhoneNumberFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  InvalidPhoneNumberFilterRequest() {}

  explicit InvalidPhoneNumberFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~InvalidPhoneNumberFilterRequest() = default;
};
class InvalidPhoneNumberFilterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> encryptedNumber{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> originalNumber{};

  InvalidPhoneNumberFilterResponseBodyData() {}

  explicit InvalidPhoneNumberFilterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (encryptedNumber) {
      res["EncryptedNumber"] = boost::any(*encryptedNumber);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (originalNumber) {
      res["OriginalNumber"] = boost::any(*originalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EncryptedNumber") != m.end() && !m["EncryptedNumber"].empty()) {
      encryptedNumber = make_shared<string>(boost::any_cast<string>(m["EncryptedNumber"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("OriginalNumber") != m.end() && !m["OriginalNumber"].empty()) {
      originalNumber = make_shared<string>(boost::any_cast<string>(m["OriginalNumber"]));
    }
  }


  virtual ~InvalidPhoneNumberFilterResponseBodyData() = default;
};
class InvalidPhoneNumberFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<InvalidPhoneNumberFilterResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InvalidPhoneNumberFilterResponseBody() {}

  explicit InvalidPhoneNumberFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<InvalidPhoneNumberFilterResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InvalidPhoneNumberFilterResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<InvalidPhoneNumberFilterResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InvalidPhoneNumberFilterResponseBody() = default;
};
class InvalidPhoneNumberFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvalidPhoneNumberFilterResponseBody> body{};

  InvalidPhoneNumberFilterResponse() {}

  explicit InvalidPhoneNumberFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InvalidPhoneNumberFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvalidPhoneNumberFilterResponseBody>(model1);
      }
    }
  }


  virtual ~InvalidPhoneNumberFilterResponse() = default;
};
class PhoneNumberEncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberEncryptRequest() {}

  explicit PhoneNumberEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberEncryptRequest() = default;
};
class PhoneNumberEncryptResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> encryptedNumber{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> originalNumber{};

  PhoneNumberEncryptResponseBodyData() {}

  explicit PhoneNumberEncryptResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedNumber) {
      res["EncryptedNumber"] = boost::any(*encryptedNumber);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (originalNumber) {
      res["OriginalNumber"] = boost::any(*originalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedNumber") != m.end() && !m["EncryptedNumber"].empty()) {
      encryptedNumber = make_shared<string>(boost::any_cast<string>(m["EncryptedNumber"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("OriginalNumber") != m.end() && !m["OriginalNumber"].empty()) {
      originalNumber = make_shared<string>(boost::any_cast<string>(m["OriginalNumber"]));
    }
  }


  virtual ~PhoneNumberEncryptResponseBodyData() = default;
};
class PhoneNumberEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PhoneNumberEncryptResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberEncryptResponseBody() {}

  explicit PhoneNumberEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<PhoneNumberEncryptResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PhoneNumberEncryptResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PhoneNumberEncryptResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberEncryptResponseBody() = default;
};
class PhoneNumberEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberEncryptResponseBody> body{};

  PhoneNumberEncryptResponse() {}

  explicit PhoneNumberEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PhoneNumberEncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberEncryptResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberEncryptResponse() = default;
};
class PhoneNumberStatusForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForAccountRequest() {}

  explicit PhoneNumberStatusForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForAccountRequest() = default;
};
class PhoneNumberStatusForAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForAccountResponseBodyData() {}

  explicit PhoneNumberStatusForAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForAccountResponseBodyData() = default;
};
class PhoneNumberStatusForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForAccountResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForAccountResponseBody() {}

  explicit PhoneNumberStatusForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PhoneNumberStatusForAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForAccountResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForAccountResponseBody() = default;
};
class PhoneNumberStatusForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForAccountResponseBody> body{};

  PhoneNumberStatusForAccountResponse() {}

  explicit PhoneNumberStatusForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PhoneNumberStatusForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForAccountResponse() = default;
};
class PhoneNumberStatusForRealRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForRealRequest() {}

  explicit PhoneNumberStatusForRealRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForRealRequest() = default;
};
class PhoneNumberStatusForRealResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForRealResponseBodyData() {}

  explicit PhoneNumberStatusForRealResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForRealResponseBodyData() = default;
};
class PhoneNumberStatusForRealResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForRealResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForRealResponseBody() {}

  explicit PhoneNumberStatusForRealResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PhoneNumberStatusForRealResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForRealResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForRealResponseBody() = default;
};
class PhoneNumberStatusForRealResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForRealResponseBody> body{};

  PhoneNumberStatusForRealResponse() {}

  explicit PhoneNumberStatusForRealResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PhoneNumberStatusForRealResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForRealResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForRealResponse() = default;
};
class PhoneNumberStatusForSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForSmsRequest() {}

  explicit PhoneNumberStatusForSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForSmsRequest() = default;
};
class PhoneNumberStatusForSmsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForSmsResponseBodyData() {}

  explicit PhoneNumberStatusForSmsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForSmsResponseBodyData() = default;
};
class PhoneNumberStatusForSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForSmsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForSmsResponseBody() {}

  explicit PhoneNumberStatusForSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PhoneNumberStatusForSmsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForSmsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForSmsResponseBody() = default;
};
class PhoneNumberStatusForSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForSmsResponseBody> body{};

  PhoneNumberStatusForSmsResponse() {}

  explicit PhoneNumberStatusForSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PhoneNumberStatusForSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForSmsResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForSmsResponse() = default;
};
class PhoneNumberStatusForVirtualRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForVirtualRequest() {}

  explicit PhoneNumberStatusForVirtualRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForVirtualRequest() = default;
};
class PhoneNumberStatusForVirtualResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isPrivacyNumber{};

  PhoneNumberStatusForVirtualResponseBodyData() {}

  explicit PhoneNumberStatusForVirtualResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isPrivacyNumber) {
      res["IsPrivacyNumber"] = boost::any(*isPrivacyNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsPrivacyNumber") != m.end() && !m["IsPrivacyNumber"].empty()) {
      isPrivacyNumber = make_shared<bool>(boost::any_cast<bool>(m["IsPrivacyNumber"]));
    }
  }


  virtual ~PhoneNumberStatusForVirtualResponseBodyData() = default;
};
class PhoneNumberStatusForVirtualResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForVirtualResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForVirtualResponseBody() {}

  explicit PhoneNumberStatusForVirtualResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PhoneNumberStatusForVirtualResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForVirtualResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForVirtualResponseBody() = default;
};
class PhoneNumberStatusForVirtualResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForVirtualResponseBody> body{};

  PhoneNumberStatusForVirtualResponse() {}

  explicit PhoneNumberStatusForVirtualResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PhoneNumberStatusForVirtualResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForVirtualResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForVirtualResponse() = default;
};
class PhoneNumberStatusForVoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForVoiceRequest() {}

  explicit PhoneNumberStatusForVoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForVoiceRequest() = default;
};
class PhoneNumberStatusForVoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForVoiceResponseBodyData() {}

  explicit PhoneNumberStatusForVoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForVoiceResponseBodyData() = default;
};
class PhoneNumberStatusForVoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForVoiceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForVoiceResponseBody() {}

  explicit PhoneNumberStatusForVoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PhoneNumberStatusForVoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForVoiceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForVoiceResponseBody() = default;
};
class PhoneNumberStatusForVoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForVoiceResponseBody> body{};

  PhoneNumberStatusForVoiceResponse() {}

  explicit PhoneNumberStatusForVoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PhoneNumberStatusForVoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForVoiceResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForVoiceResponse() = default;
};
class PvrCallbackFCUResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PvrCallbackFCUResponse() {}

  explicit PvrCallbackFCUResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~PvrCallbackFCUResponse() = default;
};
class ThreeElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> certCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ThreeElementsVerificationRequest() {}

  explicit ThreeElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (certCode) {
      res["CertCode"] = boost::any(*certCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("CertCode") != m.end() && !m["CertCode"].empty()) {
      certCode = make_shared<string>(boost::any_cast<string>(m["CertCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ThreeElementsVerificationRequest() = default;
};
class ThreeElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<long> isConsistent{};

  ThreeElementsVerificationResponseBodyData() {}

  explicit ThreeElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (isConsistent) {
      res["IsConsistent"] = boost::any(*isConsistent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("IsConsistent") != m.end() && !m["IsConsistent"].empty()) {
      isConsistent = make_shared<long>(boost::any_cast<long>(m["IsConsistent"]));
    }
  }


  virtual ~ThreeElementsVerificationResponseBodyData() = default;
};
class ThreeElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ThreeElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ThreeElementsVerificationResponseBody() {}

  explicit ThreeElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ThreeElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ThreeElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ThreeElementsVerificationResponseBody() = default;
};
class ThreeElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ThreeElementsVerificationResponseBody> body{};

  ThreeElementsVerificationResponse() {}

  explicit ThreeElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ThreeElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ThreeElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~ThreeElementsVerificationResponse() = default;
};
class TwoElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  TwoElementsVerificationRequest() {}

  explicit TwoElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~TwoElementsVerificationRequest() = default;
};
class TwoElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<long> isConsistent{};

  TwoElementsVerificationResponseBodyData() {}

  explicit TwoElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (isConsistent) {
      res["IsConsistent"] = boost::any(*isConsistent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("IsConsistent") != m.end() && !m["IsConsistent"].empty()) {
      isConsistent = make_shared<long>(boost::any_cast<long>(m["IsConsistent"]));
    }
  }


  virtual ~TwoElementsVerificationResponseBodyData() = default;
};
class TwoElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<TwoElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TwoElementsVerificationResponseBody() {}

  explicit TwoElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TwoElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TwoElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TwoElementsVerificationResponseBody() = default;
};
class TwoElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TwoElementsVerificationResponseBody> body{};

  TwoElementsVerificationResponse() {}

  explicit TwoElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TwoElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TwoElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~TwoElementsVerificationResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  DescribeEmptyNumberDetectResponse describeEmptyNumberDetectWithOptions(shared_ptr<DescribeEmptyNumberDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEmptyNumberDetectResponse describeEmptyNumberDetect(shared_ptr<DescribeEmptyNumberDetectRequest> request);
  DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysisWithOptions(shared_ptr<DescribePhoneNumberAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysis(shared_ptr<DescribePhoneNumberAnalysisRequest> request);
  DescribePhoneNumberAttributeResponse describePhoneNumberAttributeWithOptions(shared_ptr<DescribePhoneNumberAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAttributeResponse describePhoneNumberAttribute(shared_ptr<DescribePhoneNumberAttributeRequest> request);
  DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTimeWithOptions(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTime(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request);
  DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttributeWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttribute(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request);
  DescribePhoneNumberResaleResponse describePhoneNumberResaleWithOptions(shared_ptr<DescribePhoneNumberResaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberResaleResponse describePhoneNumberResale(shared_ptr<DescribePhoneNumberResaleRequest> request);
  DescribePhoneNumberStatusResponse describePhoneNumberStatusWithOptions(shared_ptr<DescribePhoneNumberStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberStatusResponse describePhoneNumberStatus(shared_ptr<DescribePhoneNumberStatusRequest> request);
  InvalidPhoneNumberFilterResponse invalidPhoneNumberFilterWithOptions(shared_ptr<InvalidPhoneNumberFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvalidPhoneNumberFilterResponse invalidPhoneNumberFilter(shared_ptr<InvalidPhoneNumberFilterRequest> request);
  PhoneNumberEncryptResponse phoneNumberEncryptWithOptions(shared_ptr<PhoneNumberEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberEncryptResponse phoneNumberEncrypt(shared_ptr<PhoneNumberEncryptRequest> request);
  PhoneNumberStatusForAccountResponse phoneNumberStatusForAccountWithOptions(shared_ptr<PhoneNumberStatusForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForAccountResponse phoneNumberStatusForAccount(shared_ptr<PhoneNumberStatusForAccountRequest> request);
  PhoneNumberStatusForRealResponse phoneNumberStatusForRealWithOptions(shared_ptr<PhoneNumberStatusForRealRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForRealResponse phoneNumberStatusForReal(shared_ptr<PhoneNumberStatusForRealRequest> request);
  PhoneNumberStatusForSmsResponse phoneNumberStatusForSmsWithOptions(shared_ptr<PhoneNumberStatusForSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForSmsResponse phoneNumberStatusForSms(shared_ptr<PhoneNumberStatusForSmsRequest> request);
  PhoneNumberStatusForVirtualResponse phoneNumberStatusForVirtualWithOptions(shared_ptr<PhoneNumberStatusForVirtualRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForVirtualResponse phoneNumberStatusForVirtual(shared_ptr<PhoneNumberStatusForVirtualRequest> request);
  PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoiceWithOptions(shared_ptr<PhoneNumberStatusForVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoice(shared_ptr<PhoneNumberStatusForVoiceRequest> request);
  PvrCallbackFCUResponse pvrCallbackFCUWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PvrCallbackFCUResponse pvrCallbackFCU();
  ThreeElementsVerificationResponse threeElementsVerificationWithOptions(shared_ptr<ThreeElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ThreeElementsVerificationResponse threeElementsVerification(shared_ptr<ThreeElementsVerificationRequest> request);
  TwoElementsVerificationResponse twoElementsVerificationWithOptions(shared_ptr<TwoElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TwoElementsVerificationResponse twoElementsVerification(shared_ptr<TwoElementsVerificationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dytnsapi20200217

#endif
