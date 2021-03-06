#if !defined (ENTITY_H)
#define  ENTITY_H

#include "AdventoConsoleEngine.h"

namespace engine
{
	class Entity
	{
	protected:
		AdventoConsoleEngine* m_Window = nullptr;

		bool m_bAlive = true;

		Vector_f2d m_vfPosition;
		Vector_f2d m_vfVelocity;
		Vector_i2d m_viSize;

	public:
		Entity() = default;
		Entity(AdventoConsoleEngine* window, Vector_f2d vfPosition, Vector_f2d vfVelocity, Vector_i2d viSize);
		virtual ~Entity();
		virtual void init();

		void setAlive(bool value);
		
		Vector_f2d getPosition() const;
		Vector_f2d getVelocity() const;

		void setPosition(Vector_f2d viPosition);
		void setVelocity(Vector_f2d viVelocity);

		Vector_i2d getSize() const;
		bool isAlive() const;
		
		virtual void handleInput(float fDeltaTime);
		virtual void update(float fDeltaTime) = 0;
		virtual void render() const = 0;
	};
}

#endif // ENTITY_H
