#ifndef TELENODE_COMPONENT_H_
#define TELENODE_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

class TelenodeComponent: public TelenodeComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the TelenodeComponent.
		 * @param entity The entity that owns the component instance.
		 * @param r_HumanBuildableComponent A HumanBuildableComponent instance that this component depends on.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		TelenodeComponent(Entity& entity, HumanBuildableComponent& r_HumanBuildableComponent);

		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

};

#endif // TELENODE_COMPONENT_H_

