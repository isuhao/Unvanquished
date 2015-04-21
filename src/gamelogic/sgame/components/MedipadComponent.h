#ifndef MEDIPAD_COMPONENT_H_
#define MEDIPAD_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

class MedipadComponent: public MedipadComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the MedipadComponent.
		 * @param entity The entity that owns the component instance.
		 * @param r_HumanBuildableComponent A HumanBuildableComponent instance that this component depends on.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		MedipadComponent(Entity& entity, HumanBuildableComponent& r_HumanBuildableComponent);

		/**
		 * @brief Handle the Die message.
		 * @param killer
		 * @param meansOfDeath
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandleDie(gentity_t* killer, meansOfDeath_t meansOfDeath);

		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

};

#endif // MEDIPAD_COMPONENT_H_

