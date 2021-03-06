#pragma once

#include <math/utils.h>
#include <math/Vector2D.h>
#include <math/Bounds.h>
#include <SFML/Graphics.hpp>

class ZombieTileMap {
public:

    ZombieTileMap(const std::vector< std::vector<char> >& tiles, const std::string& textureFile, int tileSize);

    void LoadTileMap(const std::vector< std::vector<char> >& tiles);

    int GetTileSize() { return _tileSize; }

    Bounds GetBoundsInTiles() { return Bounds(_tileMapImage.getSize()); }
    Bounds GetBoundsInPixels() { return Bounds(_tileMapImage.getSize()*_tileSize); }

    void Draw(sf::RenderTarget& target);

protected:

    sf::Shader  _tilemapShader;
    sf::Image _tileMapImage;
    sf::Texture _tileMapTexture;
    sf::Sprite _tileMapSprite;

    sf::Texture _texture;
    int _tileSize;

};

