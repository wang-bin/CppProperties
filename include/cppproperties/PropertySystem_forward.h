#pragma once
#include <unordered_map>
namespace ps
{
	//forward declarations
	template<template<typename ...> class MapT = std::unordered_map>
	class PropertyContainerBase;
	using PropertyContainer = PropertyContainerBase<>;

	class PropertyDescriptorBase;
	template<typename T>
	class PropertyDescriptor;

	template<typename T>
	class ProxyProperty;

	class PropertyBase;
	template<typename T>
	class Property;
	
	class Signal;
}
