#ifndef MAINBUILDABLE_COMPONENT_H_
#define MAINBUILDABLE_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

class MainBuildableComponent: public MainBuildableComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the MainBuildableComponent.
		 * @param entity The entity that owns the component instance.
		 * @param r_BuildableComponent A BuildableComponent instance that this component depends on.
		 * @param r_ResourceStorageComponent A ResourceStorageComponent instance that this component depends on.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		MainBuildableComponent(Entity& entity, BuildableComponent& r_BuildableComponent, ResourceStorageComponent& r_ResourceStorageComponent);

		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

};

#endif // MAINBUILDABLE_COMPONENT_H_

