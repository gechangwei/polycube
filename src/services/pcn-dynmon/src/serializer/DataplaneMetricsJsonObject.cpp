/**
* dynmon API generated from dynmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "DataplaneMetricsJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

DataplaneMetricsJsonObject::DataplaneMetricsJsonObject() {
  m_nameIsSet = false;
  m_mapNameIsSet = false;
  m_openMetricsMetadataIsSet = false;
}

DataplaneMetricsJsonObject::DataplaneMetricsJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_mapNameIsSet = false;
  m_openMetricsMetadataIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("map-name")) {
    setMapName(val.at("map-name").get<std::string>());
  }

  if (val.count("open-metrics-metadata")) {
    if (!val["open-metrics-metadata"].is_null()) {
      DataplaneMetricsOpenMetricsMetadataJsonObject newItem { val["open-metrics-metadata"] };
      setOpenMetricsMetadata(newItem);
    }
  }
}

nlohmann::json DataplaneMetricsJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_mapNameIsSet) {
    val["map-name"] = m_mapName;
  }

  if (m_openMetricsMetadataIsSet) {
    val["open-metrics-metadata"] = JsonObjectBase::toJson(m_openMetricsMetadata);
  }

  return val;
}

std::string DataplaneMetricsJsonObject::getName() const {
  return m_name;
}

void DataplaneMetricsJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool DataplaneMetricsJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



std::string DataplaneMetricsJsonObject::getMapName() const {
  return m_mapName;
}

void DataplaneMetricsJsonObject::setMapName(std::string value) {
  m_mapName = value;
  m_mapNameIsSet = true;
}

bool DataplaneMetricsJsonObject::mapNameIsSet() const {
  return m_mapNameIsSet;
}

void DataplaneMetricsJsonObject::unsetMapName() {
  m_mapNameIsSet = false;
}

DataplaneMetricsOpenMetricsMetadataJsonObject DataplaneMetricsJsonObject::getOpenMetricsMetadata() const {
  return m_openMetricsMetadata;
}

void DataplaneMetricsJsonObject::setOpenMetricsMetadata(DataplaneMetricsOpenMetricsMetadataJsonObject value) {
  m_openMetricsMetadata = value;
  m_openMetricsMetadataIsSet = true;
}

bool DataplaneMetricsJsonObject::openMetricsMetadataIsSet() const {
  return m_openMetricsMetadataIsSet;
}

void DataplaneMetricsJsonObject::unsetOpenMetricsMetadata() {
  m_openMetricsMetadataIsSet = false;
}


}
}
}

