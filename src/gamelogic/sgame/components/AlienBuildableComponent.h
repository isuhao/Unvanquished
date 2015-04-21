#ifndef ALIENBUILDABLE_COMPONENT_H_
#define ALIENBUILDABLE_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

// TODO: Remove or move this once logic outside this component doesn't need it anymore.
#define ALIEN_DETONATION_RAND_DELAY ALIEN_DETONATION_DELAY + \
                                    ((rand() - RAND_MAX / 2) / (float)(RAND_MAX / 2)) * \
	                                DETONATION_DELAY_RAND_RANGE * ALIEN_DETONATION_DELAY;

class AlienBuildableComponent: public AlienBuildableComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the AlienBuildableComponent.
		 * @param entity The entity that owns the component instance.
		 * @param r_BuildableComponent A BuildableComponent instance that this component depends on.
		 * @param r_IgnitableComponent A IgnitableComponent instance that this component depends on.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		AlienBuildableComponent(Entity& entity, BuildableComponent& r_BuildableComponent, IgnitableComponent& r_IgnitableComponent);

		/**
		 * @brief Handle the Damage message.
		 * @param amount
		 * @param source
		 * @param location
		 * @param direction
		 * @param flags
		 * @param meansOfDeath
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandleDamage(float amount, gentity_t* source, Util::optional<Vec3> location, Util::optional<Vec3> direction, int flags, meansOfDeath_t meansOfDeath);

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

#endif // ALIENBUILDABLE_COMPONENT_H_

