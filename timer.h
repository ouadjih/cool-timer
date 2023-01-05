#include<chrono>

class Timer{
    public:
        Timer(){
            _start_time=
            _current_time=
            _last_time=
            _last_delta_tick=
        };
        void Reset();
        float GetDeltaTime();
        float ElapsedTime();
    private:
        std::chrono::system_clock::time_point _start_time, _current_time,_last_time, _last_delta_tick;
        std::chrono::duration<float> _delta_time;
};
