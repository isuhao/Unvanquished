#ifndef HUMANCLASS_COMPONENT_H_
#define HUMANCLASS_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

class HumanClassComponent: public HumanClassComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the HumanClassComponent.
		 * @param entity The entity that owns the component instance.
		 * @param r_ClientComponent A ClientComponent instance that this component depends on.
		 * @param r_ArmorComponent A ArmorComponent instance that this component depends on.
		 * @param r_KnockbackComponent A KnockbackComponent instance that this component depends on.
		 * @param r_HealthComponent A HealthComponent instance that this component depends on.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		HumanClassComponent(Entity& entity, ClientComponent& r_ClientComponent, ArmorComponent& r_ArmorComponent, KnockbackComponent& r_KnockbackComponent, HealthComponent& r_HealthComponent);

		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

};

#endif // HUMANCLASS_COMPONENT_H_

