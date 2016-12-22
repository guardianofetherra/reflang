// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <string>

#include "lib/reflang.hpp"
#include "fields.src.hpp"

namespace reflang
{


template <>
class Class<MyClass> : public IClass
{
public:
	static const constexpr int FieldCount = 14;
	static const constexpr int StaticFieldCount = 0;

	int GetFieldCount() const override;
	int GetStaticFieldCount() const override;

	const std::string& GetName() const override;

	// Calls T::operator() on each field of 'MyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateFields(const MyClass& c, T t);

	template <typename T>
	static void IterateFields(MyClass& c, T t);

	template <typename T>
	static void IterateStaticFields(T t);
};

template <typename T>
void Class<MyClass>::IterateFields(const MyClass& c, T t)
{
	t(c.field);
	t(c.const_field);
	t(c.pointer_field);
	t(c.const_pointer_field);
	t(c.const_pointer_const_field);
	t(c.ref_field);
	t(c.const_ref_field);
	t(c.complex);
	t(c.const_complex);
	t(c.pointer_complex);
	t(c.const_pointer_complex);
	t(c.const_pointer_const_complex);
	t(c.ref_complex);
	t(c.const_ref_complex);
}

template <typename T>
void Class<MyClass>::IterateFields(MyClass& c, T t)
{
	t(c.field);
	t(c.const_field);
	t(c.pointer_field);
	t(c.const_pointer_field);
	t(c.const_pointer_const_field);
	t(c.ref_field);
	t(c.const_ref_field);
	t(c.complex);
	t(c.const_complex);
	t(c.pointer_complex);
	t(c.const_pointer_complex);
	t(c.const_pointer_const_complex);
	t(c.ref_complex);
	t(c.const_ref_complex);
}

template <typename T>
void Class<MyClass>::IterateStaticFields(T t)
{
}


}  // namespace reflang
