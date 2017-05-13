/*
Copyright (c) 2017 InversePalindrome
Spacelapse - Entity.cpp
InversePalindrome.com
*/


#include "Entity.hpp"


void Entity::setVelocity(sf::Vector2f velocity)
{
	this->velocity = velocity;
}

void Entity::setVelocity(float xVelocity, float yVelocity)
{
	this->velocity.x = xVelocity;
	this->velocity.y = yVelocity;
}

void Entity::accelerate(sf::Vector2f velocity)
{
	this->velocity += velocity;
}

void Entity::accelerate(float xVelocity, float yVelocity)
{
	this->velocity.x += xVelocity;
	this->velocity.y += yVelocity;
}

sf::Vector2f Entity::getVelocity() const
{
	return this->velocity;
}

void Entity::updateCurrentNode(sf::Time deltaTime, CommandQueue& commands)
{
	this->move(this->velocity * deltaTime.asSeconds());
}