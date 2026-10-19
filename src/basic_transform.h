// maybe something here...
#include "vector_util.h"
#include <SFML/System/Vector2.hpp>

struct BasicTransform {
    // methods...

    sf::Vector2f scale;
    sf::Vector2f translation;
    BasicTransform(const sf::Vector2f& scale = {1.f, 1.f},const sf::Vector2f& translation = {0.f, 0.f})
    : scale(scale), translation(translation) {
    }

    sf::Vector2f applyPoint(const sf::Vector2f& p) const{
        return {
            p.x * scale.x + translation.x,
            p.y * scale.y + translation.y
        };
    }

    sf::Vector2f applyVector(const sf::Vector2f& v) const{
        return {
            v.x * scale.x,
            v.y * scale.y
        };
    }


    bool operator==(const BasicTransform& other) const {
        return scale.x == other.scale.x
            && scale.y == other.scale.y
            && translation.x == other.translation.x
            && translation.y == other.translation.y;
    }
};
