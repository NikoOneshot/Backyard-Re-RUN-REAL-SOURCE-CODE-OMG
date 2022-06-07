function onUpdate(elapsed)
       	if getPropertyFromClass('flixel.FlxG', 'keys.justPressed.SEVEN') then
		loadSong('Unfairness', 'Unfairness', true);
	end
end
function onCreate()
    makeLuaSprite('cheater', 'cheater', -500, -100);
    setLuaSpriteScrollFactor('cheater', 0.9, 0.9);
    addGlitchEffect('cheater', 2,2)
    addLuaSprite('cheater')
  end
