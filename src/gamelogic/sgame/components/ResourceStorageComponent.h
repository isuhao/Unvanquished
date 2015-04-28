#ifndef RESOURCESTORAGE_COMPONENT_H_
#define RESOURCESTORAGE_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

class ResourceStorageComponent: public ResourceStorageComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the ResourceStorageComponent.
		 * @param entity The entity that owns the component instance.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		ResourceStorageComponent(Entity& entity);

		/**
		 * @brief Handle the PrepareNetCode message.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandlePrepareNetCode();

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

#endif // RESOURCESTORAGE_COMPONENT_H_

