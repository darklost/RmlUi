/*
 * Copyright (c) 2006 - 2008
 * Wandering Monster Studios Limited
 *
 * Any use of this program is governed by the terms of Wandering Monster
 * Studios Limited's Licence Agreement included with this program, a copy
 * of which can be obtained by contacting Wandering Monster Studios
 * Limited at info@wanderingmonster.co.nz.
 *
 */

#ifndef DECORATORINSTANCERDEFENDER_H
#define DECORATORINSTANCERDEFENDER_H

#include <Rocket/Core/DecoratorInstancer.h>

/**
	Decorator instancer for the Defender decorator.
	@author Robert Curry
 */

class DecoratorInstancerDefender : public Rocket::Core::DecoratorInstancer
{
public:
	DecoratorInstancerDefender();
	virtual ~DecoratorInstancerDefender();

	/// Instances a decorator given the property tag and attributes from the RCSS file.
	/// @param[in] name The type of decorator desired. For example, "decorator: simple(...);" is declared as type "simple".
	/// @param[in] properties All RCSS properties associated with the decorator.
	/// @param[in] interface An interface for querying the active style sheet.
	/// @return A shared_ptr to the decorator if it was instanced successfully.
	std::shared_ptr<Rocket::Core::Decorator> InstanceDecorator(const Rocket::Core::String& name, const Rocket::Core::PropertyDictionary& properties, const Rocket::Core::DecoratorInstancerInterface& interface) override;

	/// Releases the given decorator.
	/// @param decorator Decorator to release. This is guaranteed to have been constructed by this instancer.
	void ReleaseDecorator(Rocket::Core::Decorator* decorator);

	/// Releases the instancer.
	void Release();

private:
	Rocket::Core::PropertyId id_image_src;
};

#endif
