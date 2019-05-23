/**
 * bridge API generated from bridge.yang
 *
 * NOTE: This file is auto generated by polycube-codegen
 * https://github.com/polycube-network/polycube-codegen
 */

// TODO: Modify these methods with your own implementation

#include "Ports.h"
#include "Bridge.h"

Ports::Ports(polycube::service::Cube<Ports> &parent,
             std::shared_ptr<polycube::service::PortIface> port,
             const PortsJsonObject &conf)
    : PortsBase(parent, port) {}

Ports::~Ports() {}

std::string Ports::getMac() {
  throw std::runtime_error("Ports::getMac: Method not implemented");
}

PortsModeEnum Ports::getMode() {
  throw std::runtime_error("Ports::getMode: Method not implemented");
}

void Ports::setMode(const PortsModeEnum &value) {
  throw std::runtime_error("Ports::setMode: Method not implemented");
}

std::shared_ptr<PortsAccess> Ports::getAccess() {
  throw std::runtime_error("Ports::getAccess: Method not implemented");
}

void Ports::addAccess(const PortsAccessJsonObject &value) {
  throw std::runtime_error("Ports::addAccess: Method not implemented");
}

// Basic default implementation, place your extension here (if needed)
void Ports::replaceAccess(const PortsAccessJsonObject &conf) {
  // call default implementation in base class
  PortsBase::replaceAccess(conf);
}

void Ports::delAccess() {
  throw std::runtime_error("Ports::delAccess: method not implemented");
}

std::shared_ptr<PortsTrunk> Ports::getTrunk() {
  throw std::runtime_error("Ports::getTrunk: Method not implemented");
}

void Ports::addTrunk(const PortsTrunkJsonObject &value) {
  throw std::runtime_error("Ports::addTrunk: Method not implemented");
}

// Basic default implementation, place your extension here (if needed)
void Ports::replaceTrunk(const PortsTrunkJsonObject &conf) {
  // call default implementation in base class
  PortsBase::replaceTrunk(conf);
}

void Ports::delTrunk() {
  throw std::runtime_error("Ports::delTrunk: method not implemented");
}
std::shared_ptr<PortsStp> Ports::getStp(const uint16_t &vlan) {
  throw std::runtime_error("Ports::getEntry: Method not implemented");
}

std::vector<std::shared_ptr<PortsStp>> Ports::getStpList() {
  throw std::runtime_error("Ports::getStpList: Method not implemented");
}

void Ports::addStp(const uint16_t &vlan, const PortsStpJsonObject &conf) {
  throw std::runtime_error("Ports::addStp: Method not implemented");
}

// Basic default implementation, place your extension here (if needed)
void Ports::addStpList(const std::vector<PortsStpJsonObject> &conf) {
  // call default implementation in base class
  PortsBase::addStpList(conf);
}

// Basic default implementation, place your extension here (if needed)
void Ports::replaceStp(const uint16_t &vlan, const PortsStpJsonObject &conf) {
  // call default implementation in base class
  PortsBase::replaceStp(vlan, conf);
}

void Ports::delStp(const uint16_t &vlan) {
  throw std::runtime_error("Ports::delStp: Method not implemented");
}

// Basic default implementation, place your extension here (if needed)
void Ports::delStpList() {
  // call default implementation in base class
  PortsBase::delStpList();
}
