// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef REFLANG_METADATA_RETURN_NOARGS_GEN_HPP
#define REFLANG_METADATA_RETURN_NOARGS_GEN_HPP

#include <string>

#include "lib/reflang.hpp"
#include "return-noargs.src.hpp"

namespace reflang
{


template <>
class Function<decltype(ns::NamespacedFunction), ns::NamespacedFunction> : public IFunction
{
	int GetParameterCount() const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};



template <>
class Function<decltype(GlobalFunction), GlobalFunction> : public IFunction
{
	int GetParameterCount() const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};



template <>
class Function<decltype(ReturnByValue), ReturnByValue> : public IFunction
{
	int GetParameterCount() const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};



template <>
class Function<decltype(ReturnByReference), ReturnByReference> : public IFunction
{
	int GetParameterCount() const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};


}  // namespace reflang

#endif //REFLANG_METADATA_RETURN_NOARGS_GEN_HPP
