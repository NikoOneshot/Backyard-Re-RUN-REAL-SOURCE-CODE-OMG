function onCreate()
	-- background shit
	makeLuaSprite('stageback', 'stageback', -600, -150);
	setScrollFactor('stageback', 0.1, 0.1);

	addLuaSprite('stageback', false);
	addWavyShader('stageback', 'wavy')
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end