#include "Player.h"
#include "Novice.h"

Player::Player()
{
	Init();
}

void Player::Init()
{
	pos_ = { 300.0f,300.0 };
	speed_ = 2.0f;

}

void Player::Update()
{
}

void Player::Draw()
{
	Novice::DrawEllipse(
		(int)pos_.x, (int)pos_.y,
		16, 16, 0.0f,
		WHITE, kFillModeSolid
	);

}

void Player::MoveUp()
{
	pos_.y -= speed_;
}

void Player::MoveDown()
{
	pos_.y += speed_;
}

void Player::MoveRight()
{
	pos_.x += speed_;
}

void Player::MoveLeft()
{
	pos_.x -= speed_;
}
