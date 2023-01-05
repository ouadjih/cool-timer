#include<chrono>

class Timer{
    public:
        Timer(){
            _start_time = _current_time = _last_time = _last_delta_tick = std::chrono::system_clock::now();
            _delta_time = std::chrono::duration<double>(0);
        };
        //Reset the start_time to now
        void Restart(){
            _start_time = std::chrono::system_clock::now();
        };
        // returns the duration between last tick(last call of delta time) and current time.
        float GetDeltaTime(){
            _current_time = std::chrono::system_clock::now();
            _delta_time = _current_time - _last_delta_tick;
            _last_delta_tick = _current_time;
             return _delta_time.count();
        }
        // returns the duration between the start time and current time
        float GetElapsedTime(){
             _current_time = std::chrono::system_clock::now();
             std::chrono::duration<double> _elapsed_time = _current_time - _start_time;
             return _elapsed_time.count();
        }
    private:
        std::chrono::system_clock::time_point _start_time, _current_time,_last_time, _last_delta_tick;
        std::chrono::duration<double> _delta_time;
};
