(module
  (type (;0;) (func (param i32 i32 i32) (result i32)))
  (type (;1;) (func (param i32) (result i32)))
  (type (;2;) (func (param i32 i32 i32)))
  (type (;3;) (func))
  (type (;4;) (func (param i32 i64 i32) (result i64)))
  (type (;5;) (func (param i32)))
  (type (;6;) (func (param i32 i32 i32 i32) (result i32)))
  (type (;7;) (func (param i32 i32 i32 i32 i32)))
  (type (;8;) (func (param i32 i32) (result i32)))
  (type (;9;) (func (result i32)))
  (func (;0;) (type 3)
    i32.const 376395888
    i32.const 376395768
    i32.store
    i32.const 376395816
    i32.const 42
    i32.store)
  (func (;1;) (type 3)
    (local i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i64 i64 i64 i64 i64 i64 i64 i64 i64)
    call 0
    global.get 0
    i32.const 16
    i32.sub
    local.tee 7
    global.set 0
    loop  ;; label = @1
      local.get 1
      i32.const 76
      i32.mul
      i32.const 1808
      i32.add
      local.set 2
      i32.const 0
      local.set 0
      loop  ;; label = @2
        local.get 2
        local.get 0
        i32.const 2
        i32.shl
        i32.add
        i32.const 2109456582
        i32.store
        local.get 0
        i32.const 1
        i32.add
        local.tee 0
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 1
      i32.const 1
      i32.add
      local.tee 1
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 1
    loop  ;; label = @1
      i32.const 0
      local.set 0
      local.get 1
      i32.const 38
      i32.mul
      i32.const 3264
      i32.add
      local.set 2
      loop  ;; label = @2
        local.get 2
        local.get 0
        i32.const 1
        i32.shl
        i32.add
        i32.const 18090
        i32.store16
        local.get 0
        i32.const 1
        i32.add
        local.tee 0
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 1
      i32.const 1
      i32.add
      local.tee 1
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 1
    loop  ;; label = @1
      i32.const 0
      local.set 0
      local.get 1
      i32.const 152
      i32.mul
      i32.const 4000
      i32.add
      local.set 2
      loop  ;; label = @2
        local.get 2
        local.get 0
        i32.const 3
        i32.shl
        i32.add
        i64.const -150282427601257337
        i64.store
        local.get 0
        i32.const 1
        i32.add
        local.tee 0
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 1
      i32.const 1
      i32.add
      local.tee 1
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 2
    i32.const 6896
    i64.const 3182967604875373612
    i64.store
    i32.const 6911
    i32.const 741092396
    i32.store align=1
    i32.const 6904
    i64.const 3182967604875373612
    i64.store
    i32.const 0
    local.set 0
    loop  ;; label = @1
      local.get 0
      i32.const 2
      i32.shl
      i32.const 6928
      i32.add
      i32.const -1744769864
      i32.const -1570440406
      local.get 0
      i32.const 1
      i32.and
      select
      i32.store
      local.get 0
      i32.const 1
      i32.add
      local.tee 0
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    loop  ;; label = @1
      local.get 2
      i32.const 361
      i32.mul
      i32.const 7008
      i32.add
      local.set 5
      i32.const 0
      local.set 0
      loop  ;; label = @2
        local.get 5
        local.get 0
        i32.const 19
        i32.mul
        i32.add
        local.tee 1
        i64.const -2242545357980376864
        i64.const 7234017283807667300
        local.get 0
        i32.const 1
        i32.and
        local.tee 3
        select
        local.tee 35
        i64.store align=1
        local.get 1
        i32.const -522133280
        i32.const 1684300900
        local.get 3
        select
        i32.store offset=15 align=1
        local.get 1
        local.get 35
        i64.store offset=8 align=1
        local.get 0
        i32.const 1
        i32.add
        local.tee 0
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 2
      i32.const 1
      i32.add
      local.tee 2
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 5
    loop  ;; label = @1
      i32.const 0
      local.set 4
      local.get 5
      i32.const 19808792
      i32.mul
      i32.const 13872
      i32.add
      local.set 6
      loop  ;; label = @2
        local.get 6
        local.get 4
        i32.const 1042568
        i32.mul
        i32.add
        local.set 8
        i32.const 0
        local.set 3
        loop  ;; label = @3
          i32.const 0
          local.set 2
          local.get 8
          local.get 3
          i32.const 54872
          i32.mul
          i32.add
          local.set 9
          loop  ;; label = @4
            local.get 9
            local.get 2
            i32.const 2888
            i32.mul
            i32.add
            local.set 10
            i32.const 0
            local.set 1
            loop  ;; label = @5
              i32.const 0
              local.set 0
              local.get 10
              local.get 1
              i32.const 152
              i32.mul
              i32.add
              local.set 11
              loop  ;; label = @6
                local.get 11
                local.get 0
                i32.const 3
                i32.shl
                i32.add
                i64.const -5906976266816878951
                i64.store
                local.get 0
                i32.const 1
                i32.add
                local.tee 0
                i32.const 19
                i32.ne
                br_if 0 (;@6;)
              end
              local.get 1
              i32.const 1
              i32.add
              local.tee 1
              i32.const 19
              i32.ne
              br_if 0 (;@5;)
            end
            local.get 2
            i32.const 1
            i32.add
            local.tee 2
            i32.const 19
            i32.ne
            br_if 0 (;@4;)
          end
          local.get 3
          i32.const 1
          i32.add
          local.tee 3
          i32.const 19
          i32.ne
          br_if 0 (;@3;)
        end
        local.get 4
        i32.const 1
        i32.add
        local.tee 4
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 5
      i32.const 1
      i32.add
      local.tee 5
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 1
    loop  ;; label = @1
      i32.const 6819
      i32.const -4785
      local.get 1
      i32.const 1
      i32.and
      select
      local.set 5
      i32.const 0
      local.set 2
      local.get 1
      i32.const 722
      i32.mul
      i32.const 376380928
      i32.add
      local.set 3
      loop  ;; label = @2
        local.get 3
        local.get 2
        i32.const 38
        i32.mul
        i32.add
        local.set 4
        i32.const 0
        local.set 0
        loop  ;; label = @3
          local.get 4
          local.get 0
          i32.const 1
          i32.shl
          i32.add
          local.get 5
          i32.store16
          local.get 0
          i32.const 1
          i32.add
          local.tee 0
          i32.const 19
          i32.ne
          br_if 0 (;@3;)
        end
        local.get 2
        i32.const 1
        i32.add
        local.tee 2
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 1
      i32.const 1
      i32.add
      local.tee 1
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 0
    loop  ;; label = @1
      local.get 0
      i32.const 376394656
      i32.add
      i32.const 67
      i32.const 77
      local.get 0
      i32.const 1
      i32.and
      select
      i32.store8
      local.get 0
      i32.const 1
      i32.add
      local.tee 0
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 1536
    i32.load16_s
    local.set 1
    i32.const 1540
    i32.load
    local.set 2
    i32.const 1544
    i32.load16_u
    drop
    i32.const 1546
    i32.load16_s
    local.set 5
    i32.const 1560
    i64.load
    local.set 35
    i32.const 1568
    i64.load
    local.set 40
    i32.const 1576
    i64.load
    local.set 36
    i32.const 1584
    i32.load16_u
    drop
    i32.const 1592
    i64.load
    local.set 37
    i32.const 1600
    i32.load
    local.set 3
    i32.const 1608
    i64.load
    local.set 38
    i32.const 1616
    i32.load8_u
    local.set 0
    i32.const 1800
    i32.load
    drop
    i32.const 1617
    i32.const 1552
    i64.load
    i64.store8
    block  ;; label = @1
      local.get 40
      i64.const 830946288653649755
      i64.add
      local.tee 39
      local.get 3
      i64.extend_i32_s
      i64.const 1967468526
      i64.add
      local.tee 41
      i64.ge_s
      br_if 0 (;@1;)
      local.get 35
      i64.const 0
      i64.ne
      local.get 36
      i64.const 0
      i64.ne
      i32.and
      local.set 13
      local.get 2
      i64.extend_i32_s
      i64.const 1421053982
      i64.sub
      local.set 42
      local.get 36
      i32.wrap_i64
      i32.const 135
      i32.add
      local.set 14
      local.get 37
      i32.wrap_i64
      i32.extend16_s
      i32.const 12704
      i32.sub
      local.set 15
      local.get 5
      i32.const 145
      i32.add
      i32.const 255
      i32.and
      local.tee 2
      i32.const 9
      i32.add
      local.set 16
      local.get 1
      i32.const 24
      i32.shl
      i32.const 637534208
      i32.sub
      i32.const 24
      i32.shr_s
      local.tee 5
      i32.const 17
      i32.sub
      local.set 17
      local.get 38
      i64.const -1312612502
      i64.lt_s
      i64.extend_i32_u
      local.set 38
      i32.const 31
      local.get 0
      local.get 0
      i32.const 31
      i32.ge_u
      select
      i64.extend_i32_u
      local.set 37
      i32.const 1620
      i32.load16_u
      local.set 8
      loop  ;; label = @2
        i32.const 1618
        local.get 39
        i32.wrap_i64
        local.tee 4
        i32.const 1
        i32.sub
        local.tee 1
        i32.const 38
        i32.mul
        i32.const 3264
        i32.add
        local.get 1
        i32.const 1
        i32.shl
        local.tee 3
        i32.add
        i32.load16_u
        if (result i32)  ;; label = @3
          local.get 1
          i32.const 76
          i32.mul
          i32.const 1808
          i32.add
          local.get 4
          i32.const 1
          i32.add
          local.tee 0
          local.get 1
          local.get 0
          i32.const 38
          i32.mul
          i32.const 3264
          i32.add
          local.get 0
          i32.const 1
          i32.shl
          i32.add
          i32.load16_u
          select
          i32.const 2
          i32.shl
          i32.add
          i32.load
        else
          i32.const -90
        end
        i32.store8
        local.get 4
        i32.const 76
        i32.mul
        i32.const 1808
        i32.add
        local.tee 0
        local.get 4
        i32.const 1
        i32.add
        local.tee 18
        i32.const 2
        i32.shl
        i32.add
        local.set 19
        local.get 4
        i32.const 38
        i32.mul
        i32.const 3264
        i32.add
        local.get 4
        i32.const 1
        i32.shl
        i32.add
        local.set 20
        block (result i32)  ;; label = @3
          local.get 13
          i32.eqz
          if  ;; label = @4
            i32.const -128
            i32.const 65534
            local.get 0
            i32.load offset=4
            local.tee 0
            local.get 0
            i32.const 65534
            i32.ge_s
            select
            local.tee 0
            local.get 0
            i32.const -128
            i32.le_s
            select
            br 1 (;@3;)
          end
          local.get 4
          i32.const 38
          i32.mul
          i32.const 3264
          i32.add
          local.get 3
          i32.add
          i32.load16_u
        end
        i32.const 18090
        i32.sub
        local.set 0
        local.get 4
        i32.const 2
        i32.shl
        i32.const 2872
        i32.add
        local.set 21
        local.get 4
        i32.const 3
        i32.shl
        local.set 22
        local.get 1
        i32.const 2888
        i32.mul
        local.set 23
        loop  ;; label = @3
          local.get 37
          local.set 35
          local.get 20
          i32.load16_u
          if  ;; label = @4
            local.get 21
            i64.load32_s
            local.tee 35
            local.get 36
            local.get 35
            local.get 36
            i64.lt_s
            select
            local.set 35
          end
          local.get 0
          i32.extend16_s
          local.tee 6
          local.get 35
          local.get 19
          i64.load32_s
          local.tee 43
          local.get 35
          local.get 43
          i64.gt_s
          select
          i32.wrap_i64
          i32.extend16_s
          i32.const 16205
          i32.add
          i32.ge_s
          if  ;; label = @4
            local.get 39
            local.get 42
            i64.add
            local.tee 39
            local.get 41
            i64.lt_s
            br_if 2 (;@2;)
            br 3 (;@1;)
          end
          local.get 6
          i32.const 152
          i32.mul
          i32.const 4000
          i32.add
          local.get 22
          i32.add
          i64.load
          local.tee 35
          local.get 36
          local.get 35
          local.get 36
          i64.gt_s
          select
          i32.wrap_i64
          i32.const 890
          i32.add
          i32.const 65535
          i32.and
          local.tee 3
          i32.const 16
          i32.le_u
          if  ;; label = @4
            local.get 6
            i32.const 19
            i32.mul
            local.tee 9
            local.get 4
            i32.const 361
            i32.mul
            i32.const 7008
            i32.add
            i32.add
            local.get 4
            i32.add
            local.set 24
            local.get 18
            i32.const 361
            i32.mul
            local.get 9
            i32.add
            i32.const 7024
            i32.add
            local.set 25
            local.get 6
            i32.const 6896
            i32.add
            local.set 10
            local.get 6
            i32.const 2
            i32.shl
            i32.const 6928
            i32.add
            local.tee 26
            i32.load
            local.set 0
            loop  ;; label = @5
              i32.const 1620
              local.get 8
              i32.const 235
              local.get 25
              local.get 24
              local.get 3
              i32.const 2
              i32.add
              local.tee 27
              i32.const 361
              i32.mul
              i32.const 7008
              i32.add
              local.get 9
              i32.add
              local.get 4
              i32.add
              i32.load8_u
              select
              i32.load8_u
              local.tee 1
              local.get 1
              i32.const 235
              i32.ge_u
              select
              i32.sub
              local.tee 8
              i32.store16
              local.get 3
              i32.const 722
              i32.mul
              i32.const 376380928
              i32.add
              local.get 6
              i32.const 38
              i32.mul
              i32.add
              local.get 6
              i32.const 1
              i32.shl
              i32.add
              i32.const 0
              i32.store16
              local.get 16
              i32.const 0
              i32.const 230
              local.get 0
              local.get 0
              i32.const 230
              i32.le_s
              select
              i32.sub
              i32.const 255
              i32.and
              i32.lt_u
              if  ;; label = @6
                local.get 3
                i32.const 1042568
                i32.mul
                local.tee 28
                local.get 3
                i32.const 54872
                i32.mul
                i32.add
                local.get 23
                i32.add
                local.get 4
                i32.const 152
                i32.mul
                i32.add
                i32.const 60454968
                i32.sub
                local.set 29
                local.get 10
                i32.load8_s
                local.set 11
                local.get 3
                i32.const 376394656
                i32.add
                local.set 30
                local.get 2
                local.set 1
                loop  ;; label = @7
                  local.get 17
                  local.get 11
                  local.get 29
                  local.get 1
                  i32.const 19808792
                  i32.mul
                  i32.add
                  local.tee 31
                  i32.load
                  i32.const 1078491521
                  i32.add
                  i32.shr_u
                  i32.extend8_s
                  i32.lt_s
                  if  ;; label = @8
                    local.get 1
                    i32.const 1
                    i32.add
                    local.set 12
                    local.get 5
                    local.set 0
                    loop  ;; label = @9
                      local.get 27
                      i32.const 19808792
                      i32.mul
                      local.get 28
                      i32.add
                      local.get 12
                      i32.const 54872
                      i32.mul
                      i32.add
                      local.get 12
                      i32.const 2888
                      i32.mul
                      i32.add
                      local.get 0
                      i32.const 152
                      i32.mul
                      i32.add
                      local.get 0
                      i32.const 3
                      i32.shl
                      i32.add
                      i32.const 13856
                      i32.add
                      i64.load
                      local.set 35
                      i32.const 1624
                      local.get 38
                      i64.store
                      local.get 30
                      local.get 40
                      local.get 35
                      i64.div_s
                      i64.store8
                      local.get 0
                      i32.const 24
                      i32.shl
                      i32.const 16777216
                      i32.add
                      i32.const 24
                      i32.shr_s
                      local.tee 0
                      local.get 10
                      i32.load8_u
                      local.tee 11
                      local.get 31
                      i32.load
                      i32.const 1078491521
                      i32.add
                      i32.shr_u
                      i32.extend8_s
                      i32.const 17
                      i32.add
                      i32.lt_s
                      br_if 0 (;@9;)
                    end
                    local.get 26
                    i32.load
                    local.set 0
                  end
                  local.get 1
                  local.get 14
                  i32.add
                  i32.const 255
                  i32.and
                  local.tee 1
                  i32.const 0
                  i32.const 230
                  local.get 0
                  local.get 0
                  i32.const 230
                  i32.le_s
                  select
                  i32.sub
                  i32.const 255
                  i32.and
                  i32.const 9
                  i32.sub
                  i32.lt_s
                  br_if 0 (;@7;)
                end
              end
              i32.const 1632
              i64.const 0
              i64.store
              local.get 3
              i32.const 13
              i32.lt_u
              local.set 32
              local.get 3
              i32.const 4
              i32.add
              local.set 3
              local.get 32
              br_if 0 (;@5;)
            end
          end
          local.get 6
          local.get 15
          i32.add
          local.set 0
          br 0 (;@3;)
        end
        unreachable
      end
      unreachable
    end
    i32.const 0
    local.set 1
    i32.const 1632
    i64.load
    i32.const 1624
    i64.load
    i32.const 1620
    i64.load16_u
    i32.const 1618
    i64.load8_u
    i32.const 1617
    i64.load8_u
    i32.const 1792
    i64.load
    local.tee 35
    i64.const 6
    i64.shl
    i64.add
    local.get 35
    i64.const 2
    i64.shr_u
    i64.add
    i64.const 2654435769
    i64.add
    local.get 35
    i64.xor
    local.tee 35
    i64.const 6
    i64.shl
    i64.add
    local.get 35
    i64.const 2
    i64.shr_u
    i64.add
    i64.const 2654435769
    i64.add
    local.get 35
    i64.xor
    local.tee 35
    i64.const 6
    i64.shl
    i64.add
    local.get 35
    i64.const 2
    i64.shr_u
    i64.add
    i64.const 2654435769
    i64.add
    local.get 35
    i64.xor
    local.tee 35
    i64.const 6
    i64.shl
    i64.add
    local.get 35
    i64.const 2
    i64.shr_u
    i64.add
    i64.const 2654435769
    i64.add
    local.get 35
    i64.xor
    local.tee 35
    i64.const 6
    i64.shl
    i64.add
    local.get 35
    i64.const 2
    i64.shr_u
    i64.add
    i64.const 2654435769
    i64.add
    local.get 35
    i64.xor
    local.set 35
    loop  ;; label = @1
      local.get 1
      i32.const 722
      i32.mul
      i32.const 376380928
      i32.add
      local.set 5
      i32.const 0
      local.set 2
      loop  ;; label = @2
        i32.const 0
        local.set 0
        local.get 5
        local.get 2
        i32.const 38
        i32.mul
        i32.add
        local.set 3
        loop  ;; label = @3
          local.get 3
          local.get 0
          i32.const 1
          i32.shl
          i32.add
          i64.load16_u
          local.get 35
          i64.const 6
          i64.shl
          i64.add
          local.get 35
          i64.const 2
          i64.shr_u
          i64.add
          i64.const 2654435769
          i64.add
          local.get 35
          i64.xor
          local.set 35
          local.get 0
          i32.const 1
          i32.add
          local.tee 0
          i32.const 19
          i32.ne
          br_if 0 (;@3;)
        end
        local.get 2
        i32.const 1
        i32.add
        local.tee 2
        i32.const 19
        i32.ne
        br_if 0 (;@2;)
      end
      local.get 1
      i32.const 1
      i32.add
      local.tee 1
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 0
    local.set 0
    loop  ;; label = @1
      local.get 0
      i32.const 376394656
      i32.add
      i64.load8_u
      local.get 35
      i64.const 6
      i64.shl
      i64.add
      local.get 35
      i64.const 2
      i64.shr_u
      i64.add
      i64.const 2654435769
      i64.add
      local.get 35
      i64.xor
      local.set 35
      local.get 0
      i32.const 1
      i32.add
      local.tee 0
      i32.const 19
      i32.ne
      br_if 0 (;@1;)
    end
    i32.const 1792
    local.get 35
    i64.store
    local.get 7
    i32.const 1792
    i64.load
    i64.store
    global.get 0
    i32.const 16
    i32.sub
    local.tee 2
    global.set 0
    local.get 2
    local.get 7
    i32.store offset=12
    i32.const 0
    local.set 1
    global.get 0
    i32.const 208
    i32.sub
    local.tee 0
    global.set 0
    local.get 0
    local.get 7
    i32.store offset=204
    local.get 0
    i32.const 160
    i32.add
    local.tee 5
    i32.const 0
    i32.const 40
    call 5
    local.get 0
    local.get 0
    i32.load offset=204
    i32.store offset=200
    block  ;; label = @1
      i32.const 0
      local.get 0
      i32.const 200
      i32.add
      local.get 0
      i32.const 80
      i32.add
      local.get 5
      call 8
      i32.const 0
      i32.lt_s
      br_if 0 (;@1;)
      i32.const 1716
      i32.load
      i32.const 0
      i32.lt_s
      local.set 33
      i32.const 1640
      i32.const 1640
      i32.load
      local.tee 3
      i32.const -33
      i32.and
      i32.store
      block (result i32)  ;; label = @2
        block  ;; label = @3
          block  ;; label = @4
            i32.const 1688
            i32.load
            i32.eqz
            if  ;; label = @5
              i32.const 1688
              i32.const 80
              i32.store
              i32.const 1668
              i32.const 0
              i32.store
              i32.const 1656
              i64.const 0
              i64.store
              i32.const 1684
              i32.load
              local.set 1
              i32.const 1684
              local.get 0
              i32.store
              br 1 (;@4;)
            end
            i32.const 1656
            i32.load
            br_if 1 (;@3;)
          end
          i32.const -1
          i32.const 1640
          call 7
          br_if 1 (;@2;)
          drop
        end
        i32.const 1640
        local.get 0
        i32.const 200
        i32.add
        local.get 0
        i32.const 80
        i32.add
        local.get 0
        i32.const 160
        i32.add
        call 8
      end
      local.set 4
      local.get 1
      if (result i32)  ;; label = @2
        i32.const 1640
        i32.const 0
        i32.const 0
        i32.const 1676
        i32.load
        call_indirect (type 0)
        drop
        i32.const 1688
        i32.const 0
        i32.store
        i32.const 1684
        local.get 1
        i32.store
        i32.const 1668
        i32.const 0
        i32.store
        i32.const 1660
        i32.load
        drop
        i32.const 1656
        i64.const 0
        i64.store
        i32.const 0
      else
        local.get 4
      end
      drop
      i32.const 1640
      i32.const 1640
      i32.load
      local.get 3
      i32.const 32
      i32.and
      i32.or
      i32.store
      local.get 33
      br_if 0 (;@1;)
    end
    local.get 0
    i32.const 208
    i32.add
    global.set 0
    local.get 2
    i32.const 16
    i32.add
    global.set 0
    local.get 7
    i32.const 16
    i32.add
    global.set 0
    nop
    unreachable)
  (func (;2;) (type 0) (param i32 i32 i32) (result i32)
    (local i32 i32 i32 i32 i32 i32 i32 i32)
    global.get 0
    i32.const 32
    i32.sub
    local.tee 3
    global.set 0
    local.get 3
    local.get 0
    i32.load offset=28
    local.tee 4
    i32.store offset=16
    local.get 0
    i32.load offset=20
    local.set 5
    local.get 3
    local.get 2
    i32.store offset=28
    local.get 3
    local.get 1
    i32.store offset=24
    local.get 3
    local.get 5
    local.get 4
    i32.sub
    local.tee 1
    i32.store offset=20
    local.get 1
    local.get 2
    i32.add
    local.set 5
    local.get 3
    i32.const 16
    i32.add
    local.set 1
    i32.const 2
    local.set 7
    block (result i32)  ;; label = @1
      block  ;; label = @2
        block  ;; label = @3
          block  ;; label = @4
            i32.const 0
            call 13
            if  ;; label = @5
              local.get 1
              local.set 4
              br 1 (;@4;)
            end
            loop  ;; label = @5
              local.get 5
              local.get 3
              i32.load offset=12
              local.tee 6
              i32.eq
              br_if 2 (;@3;)
              local.get 6
              i32.const 0
              i32.lt_s
              if  ;; label = @6
                local.get 1
                local.set 4
                br 4 (;@2;)
              end
              local.get 1
              local.get 6
              local.get 1
              i32.load offset=4
              local.tee 8
              i32.gt_u
              local.tee 9
              i32.const 3
              i32.shl
              i32.add
              local.tee 4
              local.get 6
              local.get 8
              i32.const 0
              local.get 9
              select
              i32.sub
              local.tee 8
              local.get 4
              i32.load
              i32.add
              i32.store
              local.get 1
              i32.const 12
              i32.const 4
              local.get 9
              select
              i32.add
              local.tee 1
              local.get 1
              i32.load
              local.get 8
              i32.sub
              i32.store
              local.get 5
              local.get 6
              i32.sub
              local.set 5
              i32.const 0
              call 13
              i32.eqz
              br_if 0 (;@5;)
            end
          end
          local.get 5
          i32.const -1
          i32.ne
          br_if 1 (;@2;)
        end
        local.get 0
        local.get 0
        i32.load offset=44
        local.tee 1
        i32.store offset=28
        local.get 0
        local.get 1
        i32.store offset=20
        local.get 0
        local.get 1
        local.get 0
        i32.load offset=48
        i32.add
        i32.store offset=16
        local.get 2
        br 1 (;@1;)
      end
      local.get 0
      i32.const 0
      i32.store offset=28
      local.get 0
      i64.const 0
      i64.store offset=16
      local.get 0
      local.get 0
      i32.load
      i32.const 32
      i32.or
      i32.store
      i32.const 0
      local.get 7
      i32.const 2
      i32.eq
      br_if 0 (;@1;)
      drop
      local.get 2
      local.get 4
      i32.load offset=4
      i32.sub
    end
    local.set 10
    local.get 3
    i32.const 32
    i32.add
    global.set 0
    local.get 10)
  (func (;3;) (type 1) (param i32) (result i32)
    i32.const 0)
  (func (;4;) (type 4) (param i32 i64 i32) (result i64)
    i64.const 0)
  (func (;5;) (type 2) (param i32 i32 i32)
    (local i32 i32 i64)
    block  ;; label = @1
      local.get 2
      i32.eqz
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      i32.store8
      local.get 0
      local.get 2
      i32.add
      local.tee 3
      i32.const 1
      i32.sub
      local.get 1
      i32.store8
      local.get 2
      i32.const 3
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      i32.store8 offset=2
      local.get 0
      local.get 1
      i32.store8 offset=1
      local.get 3
      i32.const 3
      i32.sub
      local.get 1
      i32.store8
      local.get 3
      i32.const 2
      i32.sub
      local.get 1
      i32.store8
      local.get 2
      i32.const 7
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      i32.store8 offset=3
      local.get 3
      i32.const 4
      i32.sub
      local.get 1
      i32.store8
      local.get 2
      i32.const 9
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      i32.const 0
      local.get 0
      i32.sub
      i32.const 3
      i32.and
      local.tee 4
      i32.add
      local.tee 3
      local.get 1
      i32.const 255
      i32.and
      i32.const 16843009
      i32.mul
      local.tee 0
      i32.store
      local.get 3
      local.get 2
      local.get 4
      i32.sub
      i32.const -4
      i32.and
      local.tee 2
      i32.add
      local.tee 1
      i32.const 4
      i32.sub
      local.get 0
      i32.store
      local.get 2
      i32.const 9
      i32.lt_u
      br_if 0 (;@1;)
      local.get 3
      local.get 0
      i32.store offset=8
      local.get 3
      local.get 0
      i32.store offset=4
      local.get 1
      i32.const 8
      i32.sub
      local.get 0
      i32.store
      local.get 1
      i32.const 12
      i32.sub
      local.get 0
      i32.store
      local.get 2
      i32.const 25
      i32.lt_u
      br_if 0 (;@1;)
      local.get 3
      local.get 0
      i32.store offset=24
      local.get 3
      local.get 0
      i32.store offset=20
      local.get 3
      local.get 0
      i32.store offset=16
      local.get 3
      local.get 0
      i32.store offset=12
      local.get 1
      i32.const 16
      i32.sub
      local.get 0
      i32.store
      local.get 1
      i32.const 20
      i32.sub
      local.get 0
      i32.store
      local.get 1
      i32.const 24
      i32.sub
      local.get 0
      i32.store
      local.get 1
      i32.const 28
      i32.sub
      local.get 0
      i32.store
      local.get 2
      local.get 3
      i32.const 4
      i32.and
      i32.const 24
      i32.or
      local.tee 1
      i32.sub
      local.tee 2
      i32.const 32
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      i64.extend_i32_u
      i64.const 4294967297
      i64.mul
      local.set 5
      local.get 1
      local.get 3
      i32.add
      local.set 1
      loop  ;; label = @2
        local.get 1
        local.get 5
        i64.store offset=24
        local.get 1
        local.get 5
        i64.store offset=16
        local.get 1
        local.get 5
        i64.store offset=8
        local.get 1
        local.get 5
        i64.store
        local.get 1
        i32.const 32
        i32.add
        local.set 1
        local.get 2
        i32.const 32
        i32.sub
        local.tee 2
        i32.const 31
        i32.gt_u
        br_if 0 (;@2;)
      end
    end)
  (func (;6;) (type 5) (param i32)
    (local i32 i32)
    block  ;; label = @1
      local.get 0
      i32.eqz
      br_if 0 (;@1;)
      local.get 0
      i32.load offset=76
      drop
      local.get 0
      i32.load offset=20
      local.get 0
      i32.load offset=28
      i32.ne
      if  ;; label = @2
        local.get 0
        i32.const 0
        i32.const 0
        local.get 0
        i32.load offset=36
        call_indirect (type 0)
        drop
      end
      local.get 0
      i32.load offset=4
      local.tee 1
      local.get 0
      i32.load offset=8
      local.tee 2
      i32.eq
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      local.get 2
      i32.sub
      i64.extend_i32_s
      i32.const 1
      local.get 0
      i32.load offset=40
      call_indirect (type 4)
      drop
    end)
  (func (;7;) (type 1) (param i32) (result i32)
    (local i32)
    local.get 0
    local.get 0
    i32.load offset=72
    local.tee 1
    i32.const 1
    i32.sub
    local.get 1
    i32.or
    i32.store offset=72
    local.get 0
    i32.load
    local.tee 1
    i32.const 8
    i32.and
    if  ;; label = @1
      local.get 0
      local.get 1
      i32.const 32
      i32.or
      i32.store
      i32.const -1
      return
    end
    local.get 0
    i64.const 0
    i64.store offset=4 align=4
    local.get 0
    local.get 0
    i32.load offset=44
    local.tee 1
    i32.store offset=28
    local.get 0
    local.get 1
    i32.store offset=20
    local.get 0
    local.get 1
    local.get 0
    i32.load offset=48
    i32.add
    i32.store offset=16
    i32.const 0)
  (func (;8;) (type 6) (param i32 i32 i32 i32) (result i32)
    (local i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i64 i64)
    i32.const 1041
    local.set 5
    global.get 0
    i32.const 80
    i32.sub
    local.tee 6
    global.set 0
    local.get 6
    i32.const 1041
    i32.store offset=76
    local.get 6
    i32.const 55
    i32.add
    local.set 21
    local.get 6
    i32.const 56
    i32.add
    local.set 17
    block  ;; label = @1
      block  ;; label = @2
        block  ;; label = @3
          block  ;; label = @4
            loop  ;; label = @5
              i32.const 0
              local.set 4
              loop  ;; label = @6
                local.get 5
                local.set 11
                local.get 4
                local.get 12
                i32.const 2147483647
                i32.xor
                i32.gt_s
                br_if 2 (;@4;)
                local.get 4
                local.get 12
                i32.add
                local.set 12
                block  ;; label = @7
                  block  ;; label = @8
                    block  ;; label = @9
                      local.get 5
                      local.tee 4
                      i32.load8_u
                      local.tee 7
                      if  ;; label = @10
                        loop  ;; label = @11
                          block  ;; label = @12
                            block  ;; label = @13
                              local.get 7
                              i32.const 255
                              i32.and
                              local.tee 5
                              i32.eqz
                              if  ;; label = @14
                                local.get 4
                                local.set 5
                                br 1 (;@13;)
                              end
                              local.get 5
                              i32.const 37
                              i32.ne
                              br_if 1 (;@12;)
                              local.get 4
                              local.set 7
                              loop  ;; label = @14
                                local.get 7
                                i32.load8_u offset=1
                                i32.const 37
                                i32.ne
                                if  ;; label = @15
                                  local.get 7
                                  local.set 5
                                  br 2 (;@13;)
                                end
                                local.get 4
                                i32.const 1
                                i32.add
                                local.set 4
                                local.get 7
                                i32.load8_u offset=2
                                local.set 23
                                local.get 7
                                i32.const 2
                                i32.add
                                local.tee 5
                                local.set 7
                                local.get 23
                                i32.const 37
                                i32.eq
                                br_if 0 (;@14;)
                              end
                            end
                            local.get 4
                            local.get 11
                            i32.sub
                            local.tee 4
                            local.get 12
                            i32.const 2147483647
                            i32.xor
                            local.tee 22
                            i32.gt_s
                            br_if 8 (;@4;)
                            local.get 0
                            if  ;; label = @13
                              local.get 0
                              local.get 11
                              local.get 4
                              call 9
                            end
                            local.get 4
                            br_if 6 (;@6;)
                            local.get 6
                            local.get 5
                            i32.store offset=76
                            local.get 5
                            i32.const 1
                            i32.add
                            local.set 4
                            i32.const -1
                            local.set 15
                            block  ;; label = @13
                              local.get 5
                              i32.load8_s offset=1
                              i32.const 48
                              i32.sub
                              local.tee 9
                              i32.const 9
                              i32.gt_u
                              br_if 0 (;@13;)
                              local.get 5
                              i32.load8_u offset=2
                              i32.const 36
                              i32.ne
                              br_if 0 (;@13;)
                              local.get 5
                              i32.const 3
                              i32.add
                              local.set 4
                              i32.const 1
                              local.set 18
                              local.get 9
                              local.set 15
                            end
                            local.get 6
                            local.get 4
                            i32.store offset=76
                            i32.const 0
                            local.set 10
                            block  ;; label = @13
                              local.get 4
                              i32.load8_s
                              local.tee 7
                              i32.const 32
                              i32.sub
                              local.tee 5
                              i32.const 31
                              i32.gt_u
                              if  ;; label = @14
                                local.get 4
                                local.set 9
                                br 1 (;@13;)
                              end
                              local.get 4
                              local.set 9
                              i32.const 1
                              local.get 5
                              i32.shl
                              local.tee 5
                              i32.const 75913
                              i32.and
                              i32.eqz
                              br_if 0 (;@13;)
                              loop  ;; label = @14
                                local.get 6
                                local.get 4
                                i32.const 1
                                i32.add
                                local.tee 9
                                i32.store offset=76
                                local.get 5
                                local.get 10
                                i32.or
                                local.set 10
                                local.get 4
                                i32.load8_s offset=1
                                local.tee 7
                                i32.const 32
                                i32.sub
                                local.tee 5
                                i32.const 32
                                i32.ge_u
                                br_if 1 (;@13;)
                                local.get 9
                                local.set 4
                                i32.const 1
                                local.get 5
                                i32.shl
                                local.tee 5
                                i32.const 75913
                                i32.and
                                br_if 0 (;@14;)
                              end
                            end
                            block  ;; label = @13
                              local.get 7
                              i32.const 42
                              i32.eq
                              if  ;; label = @14
                                block (result i32)  ;; label = @15
                                  block  ;; label = @16
                                    local.get 9
                                    i32.load8_s offset=1
                                    i32.const 48
                                    i32.sub
                                    local.tee 4
                                    i32.const 9
                                    i32.gt_u
                                    br_if 0 (;@16;)
                                    local.get 9
                                    i32.load8_u offset=2
                                    i32.const 36
                                    i32.ne
                                    br_if 0 (;@16;)
                                    block (result i32)  ;; label = @17
                                      local.get 0
                                      i32.eqz
                                      if  ;; label = @18
                                        local.get 3
                                        local.get 4
                                        i32.const 2
                                        i32.shl
                                        i32.add
                                        i32.const 10
                                        i32.store
                                        i32.const 0
                                        br 1 (;@17;)
                                      end
                                      local.get 2
                                      local.get 4
                                      i32.const 3
                                      i32.shl
                                      i32.add
                                      i32.load
                                    end
                                    local.set 13
                                    local.get 9
                                    i32.const 3
                                    i32.add
                                    local.set 5
                                    i32.const 1
                                    br 1 (;@15;)
                                  end
                                  local.get 18
                                  br_if 6 (;@9;)
                                  local.get 9
                                  i32.const 1
                                  i32.add
                                  local.set 5
                                  local.get 0
                                  i32.eqz
                                  if  ;; label = @16
                                    local.get 6
                                    local.get 5
                                    i32.store offset=76
                                    i32.const 0
                                    local.set 18
                                    i32.const 0
                                    local.set 13
                                    br 3 (;@13;)
                                  end
                                  local.get 1
                                  local.get 1
                                  i32.load
                                  local.tee 4
                                  i32.const 4
                                  i32.add
                                  i32.store
                                  local.get 4
                                  i32.load
                                  local.set 13
                                  i32.const 0
                                end
                                local.set 18
                                local.get 6
                                local.get 5
                                i32.store offset=76
                                local.get 13
                                i32.const 0
                                i32.ge_s
                                br_if 1 (;@13;)
                                i32.const 0
                                local.get 13
                                i32.sub
                                local.set 13
                                local.get 10
                                i32.const 8192
                                i32.or
                                local.set 10
                                br 1 (;@13;)
                              end
                              local.get 6
                              i32.const 76
                              i32.add
                              call 10
                              local.tee 13
                              i32.const 0
                              i32.lt_s
                              br_if 9 (;@4;)
                              local.get 6
                              i32.load offset=76
                              local.set 5
                            end
                            i32.const 0
                            local.set 4
                            i32.const -1
                            local.set 8
                            block (result i32)  ;; label = @13
                              i32.const 0
                              local.get 5
                              i32.load8_u
                              i32.const 46
                              i32.ne
                              br_if 0 (;@13;)
                              drop
                              local.get 5
                              i32.load8_u offset=1
                              i32.const 42
                              i32.eq
                              if  ;; label = @14
                                block (result i32)  ;; label = @15
                                  block  ;; label = @16
                                    local.get 5
                                    i32.load8_s offset=2
                                    i32.const 48
                                    i32.sub
                                    local.tee 9
                                    i32.const 9
                                    i32.gt_u
                                    br_if 0 (;@16;)
                                    local.get 5
                                    i32.load8_u offset=3
                                    i32.const 36
                                    i32.ne
                                    br_if 0 (;@16;)
                                    local.get 5
                                    i32.const 4
                                    i32.add
                                    local.set 5
                                    block (result i32)  ;; label = @17
                                      local.get 0
                                      i32.eqz
                                      if  ;; label = @18
                                        local.get 3
                                        local.get 9
                                        i32.const 2
                                        i32.shl
                                        i32.add
                                        i32.const 10
                                        i32.store
                                        i32.const 0
                                        br 1 (;@17;)
                                      end
                                      local.get 2
                                      local.get 9
                                      i32.const 3
                                      i32.shl
                                      i32.add
                                      i32.load
                                    end
                                    br 1 (;@15;)
                                  end
                                  local.get 18
                                  br_if 6 (;@9;)
                                  local.get 5
                                  i32.const 2
                                  i32.add
                                  local.set 5
                                  i32.const 0
                                  local.get 0
                                  i32.eqz
                                  br_if 0 (;@15;)
                                  drop
                                  local.get 1
                                  local.get 1
                                  i32.load
                                  local.tee 9
                                  i32.const 4
                                  i32.add
                                  i32.store
                                  local.get 9
                                  i32.load
                                end
                                local.set 8
                                local.get 6
                                local.get 5
                                i32.store offset=76
                                local.get 8
                                i32.const 0
                                i32.ge_s
                                br 1 (;@13;)
                              end
                              local.get 6
                              local.get 5
                              i32.const 1
                              i32.add
                              i32.store offset=76
                              local.get 6
                              i32.const 76
                              i32.add
                              call 10
                              local.set 8
                              local.get 6
                              i32.load offset=76
                              local.set 5
                              i32.const 1
                            end
                            local.set 19
                            loop  ;; label = @13
                              local.get 4
                              local.set 14
                              i32.const 28
                              local.set 9
                              local.get 5
                              local.tee 16
                              i32.load8_s
                              local.tee 7
                              i32.const 123
                              i32.sub
                              i32.const -58
                              i32.lt_u
                              br_if 10 (;@3;)
                              local.get 5
                              i32.const 1
                              i32.add
                              local.set 5
                              local.get 7
                              local.get 4
                              i32.const 58
                              i32.mul
                              i32.add
                              i32.load8_u offset=991
                              local.tee 4
                              i32.const 1
                              i32.sub
                              i32.const 8
                              i32.lt_u
                              br_if 0 (;@13;)
                            end
                            local.get 6
                            local.get 5
                            i32.store offset=76
                            block  ;; label = @13
                              local.get 4
                              i32.const 27
                              i32.ne
                              if  ;; label = @14
                                local.get 4
                                i32.eqz
                                br_if 11 (;@3;)
                                local.get 15
                                i32.const 0
                                i32.ge_s
                                if  ;; label = @15
                                  local.get 0
                                  i32.eqz
                                  if  ;; label = @16
                                    local.get 3
                                    local.get 15
                                    i32.const 2
                                    i32.shl
                                    i32.add
                                    local.get 4
                                    i32.store
                                    br 11 (;@5;)
                                  end
                                  local.get 6
                                  local.get 2
                                  local.get 15
                                  i32.const 3
                                  i32.shl
                                  i32.add
                                  i64.load
                                  i64.store offset=64
                                  br 2 (;@13;)
                                end
                                local.get 0
                                i32.eqz
                                br_if 7 (;@7;)
                                local.get 6
                                i32.const -64
                                i32.sub
                                local.get 4
                                local.get 1
                                call 11
                                br 1 (;@13;)
                              end
                              local.get 15
                              i32.const 0
                              i32.ge_s
                              br_if 10 (;@3;)
                              i32.const 0
                              local.set 4
                              local.get 0
                              i32.eqz
                              br_if 7 (;@6;)
                            end
                            local.get 0
                            i32.load8_u
                            i32.const 32
                            i32.and
                            br_if 10 (;@2;)
                            local.get 10
                            i32.const -65537
                            i32.and
                            local.tee 7
                            local.get 10
                            local.get 10
                            i32.const 8192
                            i32.and
                            select
                            local.set 10
                            i32.const 0
                            local.set 15
                            i32.const 1024
                            local.set 20
                            local.get 17
                            local.set 9
                            block  ;; label = @13
                              block  ;; label = @14
                                block  ;; label = @15
                                  block (result i32)  ;; label = @16
                                    block  ;; label = @17
                                      block  ;; label = @18
                                        block  ;; label = @19
                                          block  ;; label = @20
                                            block (result i32)  ;; label = @21
                                              block  ;; label = @22
                                                block  ;; label = @23
                                                  block  ;; label = @24
                                                    block  ;; label = @25
                                                      block  ;; label = @26
                                                        block  ;; label = @27
                                                          block  ;; label = @28
                                                            local.get 16
                                                            i32.load8_s
                                                            local.tee 4
                                                            i32.const -45
                                                            i32.and
                                                            local.get 4
                                                            local.get 4
                                                            i32.const 15
                                                            i32.and
                                                            i32.const 3
                                                            i32.eq
                                                            select
                                                            local.get 4
                                                            local.get 14
                                                            select
                                                            local.tee 4
                                                            i32.const 88
                                                            i32.sub
                                                            br_table 4 (;@24;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 14 (;@14;) 20 (;@8;) 15 (;@13;) 6 (;@22;) 14 (;@14;) 14 (;@14;) 14 (;@14;) 20 (;@8;) 6 (;@22;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 20 (;@8;) 2 (;@26;) 5 (;@23;) 3 (;@25;) 20 (;@8;) 20 (;@8;) 9 (;@19;) 20 (;@8;) 1 (;@27;) 20 (;@8;) 20 (;@8;) 4 (;@24;) 0 (;@28;)
                                                          end
                                                          block  ;; label = @28
                                                            local.get 4
                                                            i32.const 65
                                                            i32.sub
                                                            br_table 14 (;@14;) 20 (;@8;) 11 (;@17;) 20 (;@8;) 14 (;@14;) 14 (;@14;) 14 (;@14;) 0 (;@28;)
                                                          end
                                                          local.get 4
                                                          i32.const 83
                                                          i32.eq
                                                          br_if 9 (;@18;)
                                                          br 19 (;@8;)
                                                        end
                                                        local.get 6
                                                        i64.load offset=64
                                                        local.set 28
                                                        i32.const 1024
                                                        br 5 (;@21;)
                                                      end
                                                      i32.const 0
                                                      local.set 4
                                                      block  ;; label = @26
                                                        block  ;; label = @27
                                                          block  ;; label = @28
                                                            block  ;; label = @29
                                                              block  ;; label = @30
                                                                block  ;; label = @31
                                                                  block  ;; label = @32
                                                                    local.get 14
                                                                    i32.const 255
                                                                    i32.and
                                                                    br_table 0 (;@32;) 1 (;@31;) 2 (;@30;) 3 (;@29;) 4 (;@28;) 26 (;@6;) 5 (;@27;) 6 (;@26;) 26 (;@6;)
                                                                  end
                                                                  local.get 6
                                                                  i32.load offset=64
                                                                  local.get 12
                                                                  i32.store
                                                                  br 25 (;@6;)
                                                                end
                                                                local.get 6
                                                                i32.load offset=64
                                                                local.get 12
                                                                i32.store
                                                                br 24 (;@6;)
                                                              end
                                                              local.get 6
                                                              i32.load offset=64
                                                              local.get 12
                                                              i64.extend_i32_s
                                                              i64.store
                                                              br 23 (;@6;)
                                                            end
                                                            local.get 6
                                                            i32.load offset=64
                                                            local.get 12
                                                            i32.store16
                                                            br 22 (;@6;)
                                                          end
                                                          local.get 6
                                                          i32.load offset=64
                                                          local.get 12
                                                          i32.store8
                                                          br 21 (;@6;)
                                                        end
                                                        local.get 6
                                                        i32.load offset=64
                                                        local.get 12
                                                        i32.store
                                                        br 20 (;@6;)
                                                      end
                                                      local.get 6
                                                      i32.load offset=64
                                                      local.get 12
                                                      i64.extend_i32_s
                                                      i64.store
                                                      br 19 (;@6;)
                                                    end
                                                    i32.const 8
                                                    local.get 8
                                                    local.get 8
                                                    i32.const 8
                                                    i32.le_u
                                                    select
                                                    local.set 8
                                                    local.get 10
                                                    i32.const 8
                                                    i32.or
                                                    local.set 10
                                                    i32.const 120
                                                    local.set 4
                                                  end
                                                  local.get 17
                                                  local.set 5
                                                  local.get 6
                                                  i64.load offset=64
                                                  local.tee 28
                                                  i64.eqz
                                                  i32.eqz
                                                  if  ;; label = @24
                                                    local.get 4
                                                    i32.const 32
                                                    i32.and
                                                    local.set 7
                                                    loop  ;; label = @25
                                                      local.get 5
                                                      i32.const 1
                                                      i32.sub
                                                      local.tee 5
                                                      local.get 28
                                                      i32.wrap_i64
                                                      i32.const 15
                                                      i32.and
                                                      i32.const 1520
                                                      i32.add
                                                      i32.load8_u
                                                      local.get 7
                                                      i32.or
                                                      i32.store8
                                                      local.get 28
                                                      i64.const 15
                                                      i64.gt_u
                                                      local.set 24
                                                      local.get 28
                                                      i64.const 4
                                                      i64.shr_u
                                                      local.set 28
                                                      local.get 24
                                                      br_if 0 (;@25;)
                                                    end
                                                  end
                                                  local.get 5
                                                  local.set 11
                                                  local.get 10
                                                  i32.const 8
                                                  i32.and
                                                  i32.eqz
                                                  local.get 6
                                                  i64.load offset=64
                                                  i64.eqz
                                                  i32.or
                                                  br_if 3 (;@20;)
                                                  local.get 4
                                                  i32.const 4
                                                  i32.shr_u
                                                  i32.const 1024
                                                  i32.add
                                                  local.set 20
                                                  i32.const 2
                                                  local.set 15
                                                  br 3 (;@20;)
                                                end
                                                local.get 17
                                                local.set 4
                                                local.get 6
                                                i64.load offset=64
                                                local.tee 28
                                                i64.eqz
                                                i32.eqz
                                                if  ;; label = @23
                                                  loop  ;; label = @24
                                                    local.get 4
                                                    i32.const 1
                                                    i32.sub
                                                    local.tee 4
                                                    local.get 28
                                                    i32.wrap_i64
                                                    i32.const 7
                                                    i32.and
                                                    i32.const 48
                                                    i32.or
                                                    i32.store8
                                                    local.get 28
                                                    i64.const 7
                                                    i64.gt_u
                                                    local.set 25
                                                    local.get 28
                                                    i64.const 3
                                                    i64.shr_u
                                                    local.set 28
                                                    local.get 25
                                                    br_if 0 (;@24;)
                                                  end
                                                end
                                                local.get 4
                                                local.set 11
                                                local.get 10
                                                i32.const 8
                                                i32.and
                                                i32.eqz
                                                br_if 2 (;@20;)
                                                local.get 8
                                                local.get 17
                                                local.get 4
                                                i32.sub
                                                local.tee 4
                                                i32.const 1
                                                i32.add
                                                local.get 4
                                                local.get 8
                                                i32.lt_s
                                                select
                                                local.set 8
                                                br 2 (;@20;)
                                              end
                                              local.get 6
                                              i64.load offset=64
                                              local.tee 28
                                              i64.const 0
                                              i64.lt_s
                                              if  ;; label = @22
                                                local.get 6
                                                i64.const 0
                                                local.get 28
                                                i64.sub
                                                local.tee 28
                                                i64.store offset=64
                                                i32.const 1
                                                local.set 15
                                                i32.const 1024
                                                br 1 (;@21;)
                                              end
                                              local.get 10
                                              i32.const 2048
                                              i32.and
                                              if  ;; label = @22
                                                i32.const 1
                                                local.set 15
                                                i32.const 1025
                                                br 1 (;@21;)
                                              end
                                              i32.const 1026
                                              i32.const 1024
                                              local.get 10
                                              i32.const 1
                                              i32.and
                                              local.tee 15
                                              select
                                            end
                                            local.set 20
                                            local.get 17
                                            local.set 7
                                            block  ;; label = @21
                                              local.get 28
                                              i64.const 4294967296
                                              i64.lt_u
                                              if  ;; label = @22
                                                local.get 28
                                                local.set 29
                                                br 1 (;@21;)
                                              end
                                              loop  ;; label = @22
                                                local.get 7
                                                i32.const 1
                                                i32.sub
                                                local.tee 7
                                                local.get 28
                                                local.get 28
                                                i64.const 10
                                                i64.div_u
                                                local.tee 29
                                                i64.const 10
                                                i64.mul
                                                i64.sub
                                                i32.wrap_i64
                                                i32.const 48
                                                i32.or
                                                i32.store8
                                                local.get 28
                                                i64.const 42949672959
                                                i64.gt_u
                                                local.set 26
                                                local.get 29
                                                local.set 28
                                                local.get 26
                                                br_if 0 (;@22;)
                                              end
                                            end
                                            local.get 29
                                            i32.wrap_i64
                                            local.tee 5
                                            if  ;; label = @21
                                              loop  ;; label = @22
                                                local.get 7
                                                i32.const 1
                                                i32.sub
                                                local.tee 7
                                                local.get 5
                                                local.get 5
                                                i32.const 10
                                                i32.div_u
                                                local.tee 4
                                                i32.const 10
                                                i32.mul
                                                i32.sub
                                                i32.const 48
                                                i32.or
                                                i32.store8
                                                local.get 5
                                                i32.const 9
                                                i32.gt_u
                                                local.set 27
                                                local.get 4
                                                local.set 5
                                                local.get 27
                                                br_if 0 (;@22;)
                                              end
                                            end
                                            local.get 7
                                            local.set 11
                                          end
                                          local.get 19
                                          local.get 8
                                          i32.const 0
                                          i32.lt_s
                                          i32.and
                                          br_if 15 (;@4;)
                                          local.get 10
                                          i32.const -65537
                                          i32.and
                                          local.get 10
                                          local.get 19
                                          select
                                          local.set 10
                                          local.get 6
                                          i64.load offset=64
                                          local.tee 29
                                          i64.const 0
                                          i64.ne
                                          local.get 8
                                          i32.or
                                          i32.eqz
                                          if  ;; label = @20
                                            local.get 17
                                            local.set 11
                                            i32.const 0
                                            local.set 8
                                            br 12 (;@8;)
                                          end
                                          local.get 8
                                          local.get 29
                                          i64.eqz
                                          local.get 17
                                          local.get 11
                                          i32.sub
                                          i32.add
                                          local.tee 4
                                          local.get 4
                                          local.get 8
                                          i32.lt_s
                                          select
                                          local.set 8
                                          br 11 (;@8;)
                                        end
                                        block (result i32)  ;; label = @19
                                          i32.const 2147483647
                                          local.get 8
                                          local.get 8
                                          i32.const 2147483647
                                          i32.ge_u
                                          select
                                          local.tee 9
                                          local.tee 16
                                          i32.const 0
                                          i32.ne
                                          local.set 10
                                          block  ;; label = @20
                                            block  ;; label = @21
                                              block  ;; label = @22
                                                local.get 6
                                                i32.load offset=64
                                                local.tee 4
                                                i32.const 1034
                                                local.get 4
                                                select
                                                local.tee 11
                                                local.tee 5
                                                local.tee 14
                                                i32.const 3
                                                i32.and
                                                i32.eqz
                                                local.get 16
                                                i32.eqz
                                                i32.or
                                                br_if 0 (;@22;)
                                                loop  ;; label = @23
                                                  local.get 14
                                                  i32.load8_u
                                                  i32.eqz
                                                  br_if 2 (;@21;)
                                                  local.get 16
                                                  i32.const 1
                                                  i32.sub
                                                  local.tee 16
                                                  i32.const 0
                                                  i32.ne
                                                  local.set 10
                                                  local.get 14
                                                  i32.const 1
                                                  i32.add
                                                  local.tee 14
                                                  i32.const 3
                                                  i32.and
                                                  i32.eqz
                                                  br_if 1 (;@22;)
                                                  local.get 16
                                                  br_if 0 (;@23;)
                                                end
                                              end
                                              local.get 10
                                              i32.eqz
                                              br_if 1 (;@20;)
                                              local.get 14
                                              i32.load8_u
                                              i32.eqz
                                              local.get 16
                                              i32.const 4
                                              i32.lt_u
                                              i32.or
                                              i32.eqz
                                              if  ;; label = @22
                                                loop  ;; label = @23
                                                  local.get 14
                                                  i32.load
                                                  local.tee 4
                                                  i32.const -1
                                                  i32.xor
                                                  local.get 4
                                                  i32.const 16843009
                                                  i32.sub
                                                  i32.and
                                                  i32.const -2139062144
                                                  i32.and
                                                  br_if 2 (;@21;)
                                                  local.get 14
                                                  i32.const 4
                                                  i32.add
                                                  local.set 14
                                                  local.get 16
                                                  i32.const 4
                                                  i32.sub
                                                  local.tee 16
                                                  i32.const 3
                                                  i32.gt_u
                                                  br_if 0 (;@23;)
                                                end
                                              end
                                              local.get 16
                                              i32.eqz
                                              br_if 1 (;@20;)
                                            end
                                            loop  ;; label = @21
                                              local.get 14
                                              local.get 14
                                              i32.load8_u
                                              i32.eqz
                                              br_if 2 (;@19;)
                                              drop
                                              local.get 14
                                              i32.const 1
                                              i32.add
                                              local.set 14
                                              local.get 16
                                              i32.const 1
                                              i32.sub
                                              local.tee 16
                                              br_if 0 (;@21;)
                                            end
                                          end
                                          i32.const 0
                                        end
                                        local.tee 4
                                        local.get 5
                                        i32.sub
                                        local.get 9
                                        local.get 4
                                        select
                                        local.tee 4
                                        local.get 11
                                        i32.add
                                        local.set 9
                                        local.get 8
                                        i32.const 0
                                        i32.ge_s
                                        if  ;; label = @19
                                          local.get 7
                                          local.set 10
                                          local.get 4
                                          local.set 8
                                          br 11 (;@8;)
                                        end
                                        local.get 7
                                        local.set 10
                                        local.get 4
                                        local.set 8
                                        local.get 9
                                        i32.load8_u
                                        br_if 14 (;@4;)
                                        br 10 (;@8;)
                                      end
                                      local.get 8
                                      if  ;; label = @18
                                        local.get 6
                                        i32.load offset=64
                                        br 2 (;@16;)
                                      end
                                      i32.const 0
                                      local.set 4
                                      local.get 0
                                      i32.const 32
                                      local.get 13
                                      i32.const 0
                                      local.get 10
                                      call 12
                                      br 2 (;@15;)
                                    end
                                    local.get 6
                                    i32.const 0
                                    i32.store offset=12
                                    local.get 6
                                    local.get 6
                                    i64.load offset=64
                                    i64.store32 offset=8
                                    local.get 6
                                    local.get 6
                                    i32.const 8
                                    i32.add
                                    local.tee 4
                                    i32.store offset=64
                                    i32.const -1
                                    local.set 8
                                    local.get 4
                                  end
                                  local.set 7
                                  i32.const 0
                                  local.set 4
                                  loop  ;; label = @16
                                    block  ;; label = @17
                                      local.get 7
                                      i32.load
                                      local.tee 11
                                      i32.eqz
                                      br_if 0 (;@17;)
                                      local.get 6
                                      i32.const 4
                                      i32.add
                                      local.get 11
                                      call 14
                                      local.tee 11
                                      i32.const 0
                                      i32.lt_s
                                      br_if 15 (;@2;)
                                      local.get 11
                                      local.get 8
                                      local.get 4
                                      i32.sub
                                      i32.gt_u
                                      br_if 0 (;@17;)
                                      local.get 7
                                      i32.const 4
                                      i32.add
                                      local.set 7
                                      local.get 4
                                      local.get 11
                                      i32.add
                                      local.tee 4
                                      local.get 8
                                      i32.lt_u
                                      br_if 1 (;@16;)
                                    end
                                  end
                                  i32.const 61
                                  local.set 9
                                  local.get 4
                                  i32.const 0
                                  i32.lt_s
                                  br_if 12 (;@3;)
                                  local.get 0
                                  i32.const 32
                                  local.get 13
                                  local.get 4
                                  local.get 10
                                  call 12
                                  local.get 4
                                  i32.eqz
                                  if  ;; label = @16
                                    i32.const 0
                                    local.set 4
                                    br 1 (;@15;)
                                  end
                                  i32.const 0
                                  local.set 9
                                  local.get 6
                                  i32.load offset=64
                                  local.set 7
                                  loop  ;; label = @16
                                    local.get 7
                                    i32.load
                                    local.tee 11
                                    i32.eqz
                                    br_if 1 (;@15;)
                                    local.get 6
                                    i32.const 4
                                    i32.add
                                    local.tee 8
                                    local.get 11
                                    call 14
                                    local.tee 11
                                    local.get 9
                                    i32.add
                                    local.tee 9
                                    local.get 4
                                    i32.gt_u
                                    br_if 1 (;@15;)
                                    local.get 0
                                    local.get 8
                                    local.get 11
                                    call 9
                                    local.get 7
                                    i32.const 4
                                    i32.add
                                    local.set 7
                                    local.get 4
                                    local.get 9
                                    i32.gt_u
                                    br_if 0 (;@16;)
                                  end
                                end
                                local.get 0
                                i32.const 32
                                local.get 13
                                local.get 4
                                local.get 10
                                i32.const 8192
                                i32.xor
                                call 12
                                local.get 13
                                local.get 4
                                local.get 4
                                local.get 13
                                i32.lt_s
                                select
                                local.set 4
                                br 8 (;@6;)
                              end
                              local.get 19
                              local.get 8
                              i32.const 0
                              i32.lt_s
                              i32.and
                              br_if 9 (;@4;)
                              i32.const 61
                              local.set 9
                              local.get 6
                              f64.load offset=64
                              drop
                              unreachable
                            end
                            local.get 6
                            local.get 6
                            i64.load offset=64
                            i64.store8 offset=55
                            i32.const 1
                            local.set 8
                            local.get 21
                            local.set 11
                            local.get 7
                            local.set 10
                            br 4 (;@8;)
                          end
                          local.get 4
                          i32.load8_u offset=1
                          local.set 7
                          local.get 4
                          i32.const 1
                          i32.add
                          local.set 4
                          br 0 (;@11;)
                        end
                        unreachable
                      end
                      local.get 0
                      br_if 8 (;@1;)
                      local.get 18
                      i32.eqz
                      br_if 2 (;@7;)
                      i32.const 1
                      local.set 4
                      loop  ;; label = @10
                        local.get 3
                        local.get 4
                        i32.const 2
                        i32.shl
                        i32.add
                        i32.load
                        local.tee 0
                        if  ;; label = @11
                          local.get 2
                          local.get 4
                          i32.const 3
                          i32.shl
                          i32.add
                          local.get 0
                          local.get 1
                          call 11
                          i32.const 1
                          local.set 12
                          local.get 4
                          i32.const 1
                          i32.add
                          local.tee 4
                          i32.const 10
                          i32.ne
                          br_if 1 (;@10;)
                          br 10 (;@1;)
                        end
                      end
                      i32.const 1
                      local.set 12
                      local.get 4
                      i32.const 10
                      i32.ge_u
                      br_if 8 (;@1;)
                      loop  ;; label = @10
                        local.get 3
                        local.get 4
                        i32.const 2
                        i32.shl
                        i32.add
                        i32.load
                        br_if 1 (;@9;)
                        local.get 4
                        i32.const 1
                        i32.add
                        local.tee 4
                        i32.const 10
                        i32.ne
                        br_if 0 (;@10;)
                      end
                      br 8 (;@1;)
                    end
                    i32.const 28
                    local.set 9
                    br 5 (;@3;)
                  end
                  local.get 8
                  local.get 9
                  local.get 11
                  i32.sub
                  local.tee 7
                  local.get 7
                  local.get 8
                  i32.lt_s
                  select
                  local.tee 5
                  local.get 15
                  i32.const 2147483647
                  i32.xor
                  i32.gt_s
                  br_if 3 (;@4;)
                  i32.const 61
                  local.set 9
                  local.get 13
                  local.get 5
                  local.get 15
                  i32.add
                  local.tee 8
                  local.get 8
                  local.get 13
                  i32.lt_s
                  select
                  local.tee 4
                  local.get 22
                  i32.gt_s
                  br_if 4 (;@3;)
                  local.get 0
                  i32.const 32
                  local.get 4
                  local.get 8
                  local.get 10
                  call 12
                  local.get 0
                  local.get 20
                  local.get 15
                  call 9
                  local.get 0
                  i32.const 48
                  local.get 4
                  local.get 8
                  local.get 10
                  i32.const 65536
                  i32.xor
                  call 12
                  local.get 0
                  i32.const 48
                  local.get 5
                  local.get 7
                  i32.const 0
                  call 12
                  local.get 0
                  local.get 11
                  local.get 7
                  call 9
                  local.get 0
                  i32.const 32
                  local.get 4
                  local.get 8
                  local.get 10
                  i32.const 8192
                  i32.xor
                  call 12
                  local.get 6
                  i32.load offset=76
                  local.set 5
                  br 1 (;@6;)
                end
              end
            end
            i32.const 0
            local.set 12
            br 3 (;@1;)
          end
          i32.const 61
          local.set 9
        end
        i32.const 376395720
        local.get 9
        i32.store
      end
      i32.const -1
      local.set 12
    end
    local.get 6
    i32.const 80
    i32.add
    global.set 0
    local.get 12)
  (func (;9;) (type 2) (param i32 i32 i32)
    (local i32 i32 i32 i32)
    local.get 0
    i32.load8_u
    i32.const 32
    i32.and
    i32.eqz
    if  ;; label = @1
      block  ;; label = @2
        local.get 2
        local.get 0
        local.tee 4
        i32.load offset=16
        local.tee 0
        if (result i32)  ;; label = @3
          local.get 0
        else
          local.get 4
          call 7
          br_if 1 (;@2;)
          local.get 4
          i32.load offset=16
        end
        local.get 4
        i32.load offset=20
        local.tee 0
        i32.sub
        i32.gt_u
        if  ;; label = @3
          local.get 4
          local.get 1
          local.get 2
          local.get 4
          i32.load offset=36
          call_indirect (type 0)
          drop
          br 1 (;@2;)
        end
        block  ;; label = @3
          block  ;; label = @4
            local.get 2
            i32.eqz
            local.get 4
            i32.load offset=80
            i32.const 0
            i32.lt_s
            i32.or
            br_if 0 (;@4;)
            local.get 2
            local.set 5
            loop  ;; label = @5
              local.get 1
              local.get 5
              i32.add
              local.tee 3
              i32.const 1
              i32.sub
              i32.load8_u
              i32.const 10
              i32.ne
              if  ;; label = @6
                local.get 5
                i32.const 1
                i32.sub
                local.tee 5
                br_if 1 (;@5;)
                br 2 (;@4;)
              end
            end
            local.get 4
            local.get 1
            local.get 5
            local.get 4
            i32.load offset=36
            call_indirect (type 0)
            local.get 5
            i32.lt_u
            br_if 2 (;@2;)
            local.get 2
            local.get 5
            i32.sub
            local.set 2
            local.get 4
            i32.load offset=20
            local.set 0
            br 1 (;@3;)
          end
          local.get 1
          local.set 3
        end
        local.get 0
        local.get 2
        i32.add
        local.set 6
        block  ;; label = @3
          block  ;; label = @4
            local.get 0
            local.get 3
            i32.xor
            i32.const 3
            i32.and
            i32.eqz
            if  ;; label = @5
              local.get 0
              i32.const 3
              i32.and
              i32.eqz
              local.get 2
              i32.const 0
              i32.le_s
              i32.or
              br_if 1 (;@4;)
              loop  ;; label = @6
                local.get 0
                local.get 3
                i32.load8_u
                i32.store8
                local.get 3
                i32.const 1
                i32.add
                local.set 3
                local.get 0
                i32.const 1
                i32.add
                local.tee 0
                i32.const 3
                i32.and
                i32.eqz
                br_if 2 (;@4;)
                local.get 0
                local.get 6
                i32.lt_u
                br_if 0 (;@6;)
              end
              br 1 (;@4;)
            end
            block  ;; label = @5
              local.get 6
              i32.const 4
              i32.lt_u
              br_if 0 (;@5;)
              local.get 6
              i32.const 4
              i32.sub
              local.tee 1
              local.get 0
              i32.lt_u
              br_if 0 (;@5;)
              loop  ;; label = @6
                local.get 0
                local.get 3
                i32.load8_u
                i32.store8
                local.get 0
                local.get 3
                i32.load8_u offset=1
                i32.store8 offset=1
                local.get 0
                local.get 3
                i32.load8_u offset=2
                i32.store8 offset=2
                local.get 0
                local.get 3
                i32.load8_u offset=3
                i32.store8 offset=3
                local.get 3
                i32.const 4
                i32.add
                local.set 3
                local.get 0
                i32.const 4
                i32.add
                local.tee 0
                local.get 1
                i32.le_u
                br_if 0 (;@6;)
              end
              br 2 (;@3;)
            end
            br 1 (;@3;)
          end
          block  ;; label = @4
            local.get 6
            i32.const -4
            i32.and
            local.tee 5
            i32.const 64
            i32.lt_u
            br_if 0 (;@4;)
            local.get 0
            local.get 5
            i32.const -64
            i32.add
            local.tee 1
            i32.gt_u
            br_if 0 (;@4;)
            loop  ;; label = @5
              local.get 0
              local.get 3
              i32.load
              i32.store
              local.get 0
              local.get 3
              i32.load offset=4
              i32.store offset=4
              local.get 0
              local.get 3
              i32.load offset=8
              i32.store offset=8
              local.get 0
              local.get 3
              i32.load offset=12
              i32.store offset=12
              local.get 0
              local.get 3
              i32.load offset=16
              i32.store offset=16
              local.get 0
              local.get 3
              i32.load offset=20
              i32.store offset=20
              local.get 0
              local.get 3
              i32.load offset=24
              i32.store offset=24
              local.get 0
              local.get 3
              i32.load offset=28
              i32.store offset=28
              local.get 0
              local.get 3
              i32.load offset=32
              i32.store offset=32
              local.get 0
              local.get 3
              i32.load offset=36
              i32.store offset=36
              local.get 0
              local.get 3
              i32.load offset=40
              i32.store offset=40
              local.get 0
              local.get 3
              i32.load offset=44
              i32.store offset=44
              local.get 0
              local.get 3
              i32.load offset=48
              i32.store offset=48
              local.get 0
              local.get 3
              i32.load offset=52
              i32.store offset=52
              local.get 0
              local.get 3
              i32.load offset=56
              i32.store offset=56
              local.get 0
              local.get 3
              i32.load offset=60
              i32.store offset=60
              local.get 3
              i32.const -64
              i32.sub
              local.set 3
              local.get 0
              i32.const -64
              i32.sub
              local.tee 0
              local.get 1
              i32.le_u
              br_if 0 (;@5;)
            end
          end
          local.get 0
          local.get 5
          i32.ge_u
          br_if 0 (;@3;)
          loop  ;; label = @4
            local.get 0
            local.get 3
            i32.load
            i32.store
            local.get 3
            i32.const 4
            i32.add
            local.set 3
            local.get 0
            i32.const 4
            i32.add
            local.tee 0
            local.get 5
            i32.lt_u
            br_if 0 (;@4;)
          end
        end
        local.get 0
        local.get 6
        i32.lt_u
        if  ;; label = @3
          loop  ;; label = @4
            local.get 0
            local.get 3
            i32.load8_u
            i32.store8
            local.get 3
            i32.const 1
            i32.add
            local.set 3
            local.get 0
            i32.const 1
            i32.add
            local.tee 0
            local.get 6
            i32.ne
            br_if 0 (;@4;)
          end
        end
        local.get 4
        local.get 4
        i32.load offset=20
        local.get 2
        i32.add
        i32.store offset=20
      end
    end)
  (func (;10;) (type 1) (param i32) (result i32)
    (local i32 i32 i32 i32 i32 i32)
    local.get 0
    i32.load
    local.tee 3
    i32.load8_s
    i32.const 48
    i32.sub
    local.tee 1
    i32.const 9
    i32.gt_u
    if  ;; label = @1
      i32.const 0
      return
    end
    loop  ;; label = @1
      i32.const -1
      local.set 4
      local.get 2
      i32.const 214748364
      i32.le_u
      if  ;; label = @2
        i32.const -1
        local.get 1
        local.get 2
        i32.const 10
        i32.mul
        local.tee 5
        i32.add
        local.get 1
        local.get 5
        i32.const 2147483647
        i32.xor
        i32.gt_u
        select
        local.set 4
      end
      local.get 0
      local.get 3
      i32.const 1
      i32.add
      local.tee 5
      i32.store
      local.get 3
      i32.load8_s offset=1
      local.set 6
      local.get 4
      local.set 2
      local.get 5
      local.set 3
      local.get 6
      i32.const 48
      i32.sub
      local.tee 1
      i32.const 10
      i32.lt_u
      br_if 0 (;@1;)
    end
    local.get 2)
  (func (;11;) (type 2) (param i32 i32 i32)
    block  ;; label = @1
      block  ;; label = @2
        block  ;; label = @3
          block  ;; label = @4
            block  ;; label = @5
              block  ;; label = @6
                block  ;; label = @7
                  block  ;; label = @8
                    block  ;; label = @9
                      block  ;; label = @10
                        block  ;; label = @11
                          local.get 1
                          i32.const 9
                          i32.sub
                          br_table 0 (;@11;) 8 (;@3;) 9 (;@2;) 10 (;@1;) 8 (;@3;) 9 (;@2;) 1 (;@10;) 2 (;@9;) 3 (;@8;) 4 (;@7;) 10 (;@1;) 9 (;@2;) 10 (;@1;) 10 (;@1;) 8 (;@3;) 9 (;@2;) 5 (;@6;) 6 (;@5;) 7 (;@4;)
                        end
                        local.get 2
                        local.get 2
                        i32.load
                        local.tee 1
                        i32.const 4
                        i32.add
                        i32.store
                        local.get 0
                        local.get 1
                        i32.load
                        i32.store
                        return
                      end
                      local.get 2
                      local.get 2
                      i32.load
                      local.tee 1
                      i32.const 4
                      i32.add
                      i32.store
                      local.get 0
                      local.get 1
                      i64.load16_s
                      i64.store
                      return
                    end
                    local.get 2
                    local.get 2
                    i32.load
                    local.tee 1
                    i32.const 4
                    i32.add
                    i32.store
                    local.get 0
                    local.get 1
                    i64.load16_u
                    i64.store
                    return
                  end
                  local.get 2
                  local.get 2
                  i32.load
                  local.tee 1
                  i32.const 4
                  i32.add
                  i32.store
                  local.get 0
                  local.get 1
                  i64.load8_s
                  i64.store
                  return
                end
                local.get 2
                local.get 2
                i32.load
                local.tee 1
                i32.const 4
                i32.add
                i32.store
                local.get 0
                local.get 1
                i64.load8_u
                i64.store
                return
              end
              local.get 2
              local.get 2
              i32.load
              i32.const 7
              i32.add
              i32.const -8
              i32.and
              local.tee 1
              i32.const 8
              i32.add
              i32.store
              local.get 0
              local.get 1
              f64.load
              f64.store
              return
            end
            unreachable
          end
          return
        end
        local.get 2
        local.get 2
        i32.load
        local.tee 1
        i32.const 4
        i32.add
        i32.store
        local.get 0
        local.get 1
        i64.load32_s
        i64.store
        return
      end
      local.get 2
      local.get 2
      i32.load
      local.tee 1
      i32.const 4
      i32.add
      i32.store
      local.get 0
      local.get 1
      i64.load32_u
      i64.store
      return
    end
    local.get 2
    local.get 2
    i32.load
    i32.const 7
    i32.add
    i32.const -8
    i32.and
    local.tee 1
    i32.const 8
    i32.add
    i32.store
    local.get 0
    local.get 1
    i64.load
    i64.store)
  (func (;12;) (type 7) (param i32 i32 i32 i32 i32)
    (local i32)
    global.get 0
    i32.const 256
    i32.sub
    local.tee 5
    global.set 0
    local.get 4
    i32.const 73728
    i32.and
    local.get 2
    local.get 3
    i32.le_s
    i32.or
    i32.eqz
    if  ;; label = @1
      local.get 5
      local.get 1
      local.get 2
      local.get 3
      i32.sub
      local.tee 3
      i32.const 256
      local.get 3
      i32.const 256
      i32.lt_u
      local.tee 1
      select
      call 5
      local.get 1
      i32.eqz
      if  ;; label = @2
        loop  ;; label = @3
          local.get 0
          local.get 5
          i32.const 256
          call 9
          local.get 3
          i32.const 256
          i32.sub
          local.tee 3
          i32.const 255
          i32.gt_u
          br_if 0 (;@3;)
        end
      end
      local.get 0
      local.get 5
      local.get 3
      call 9
    end
    local.get 5
    i32.const 256
    i32.add
    global.set 0)
  (func (;13;) (type 1) (param i32) (result i32)
    local.get 0
    i32.eqz
    if  ;; label = @1
      i32.const 0
      return
    end
    i32.const 376395720
    local.get 0
    i32.store
    i32.const -1)
  (func (;14;) (type 8) (param i32 i32) (result i32)
    local.get 0
    i32.eqz
    if  ;; label = @1
      i32.const 0
      return
    end
    block (result i32)  ;; label = @1
      block  ;; label = @2
        local.get 0
        if (result i32)  ;; label = @3
          local.get 1
          i32.const 127
          i32.le_u
          br_if 1 (;@2;)
          block  ;; label = @4
            i32.const 376395888
            i32.load
            i32.load
            i32.eqz
            if  ;; label = @5
              local.get 1
              i32.const -128
              i32.and
              i32.const 57216
              i32.eq
              br_if 3 (;@2;)
              br 1 (;@4;)
            end
            local.get 1
            i32.const 2047
            i32.le_u
            if  ;; label = @5
              local.get 0
              local.get 1
              i32.const 63
              i32.and
              i32.const 128
              i32.or
              i32.store8 offset=1
              local.get 0
              local.get 1
              i32.const 6
              i32.shr_u
              i32.const 192
              i32.or
              i32.store8
              i32.const 2
              br 4 (;@1;)
            end
            local.get 1
            i32.const -8192
            i32.and
            i32.const 57344
            i32.ne
            local.get 1
            i32.const 55296
            i32.ge_u
            i32.and
            i32.eqz
            if  ;; label = @5
              local.get 0
              local.get 1
              i32.const 63
              i32.and
              i32.const 128
              i32.or
              i32.store8 offset=2
              local.get 0
              local.get 1
              i32.const 12
              i32.shr_u
              i32.const 224
              i32.or
              i32.store8
              local.get 0
              local.get 1
              i32.const 6
              i32.shr_u
              i32.const 63
              i32.and
              i32.const 128
              i32.or
              i32.store8 offset=1
              i32.const 3
              br 4 (;@1;)
            end
            local.get 1
            i32.const 65536
            i32.sub
            i32.const 1048575
            i32.le_u
            if  ;; label = @5
              local.get 0
              local.get 1
              i32.const 63
              i32.and
              i32.const 128
              i32.or
              i32.store8 offset=3
              local.get 0
              local.get 1
              i32.const 18
              i32.shr_u
              i32.const 240
              i32.or
              i32.store8
              local.get 0
              local.get 1
              i32.const 6
              i32.shr_u
              i32.const 63
              i32.and
              i32.const 128
              i32.or
              i32.store8 offset=2
              local.get 0
              local.get 1
              i32.const 12
              i32.shr_u
              i32.const 63
              i32.and
              i32.const 128
              i32.or
              i32.store8 offset=1
              i32.const 4
              br 4 (;@1;)
            end
          end
          i32.const 376395720
          i32.const 25
          i32.store
          i32.const -1
        else
          i32.const 1
        end
        br 1 (;@1;)
      end
      local.get 0
      local.get 1
      i32.store8
      i32.const 1
    end)
  (func (;15;) (type 9) (result i32)
    global.get 0)
  (func (;16;) (type 5) (param i32)
    local.get 0
    global.set 0)
  (table (;0;) 5 5 funcref)
  (memory (;0;) 32000 32768)
  (global (;0;) (mut i32) (i32.const 376461472))
  (export "memory" (memory 0))
  (export "__indirect_function_table" (table 0))
  (export "_start" (func 1))
  (export "stackSave" (func 15))
  (export "stackRestore" (func 16))
  (elem (;0;) (i32.const 1) func 0 3 2 4)
  (data (;0;) (i32.const 1024) "-+   0X0x\00(null)\00%llu\0a")
  (data (;1;) (i32.const 1056) "\19\00\0a\00\19\19\19\00\00\00\00\05\00\00\00\00\00\00\09\00\00\00\00\0b\00\00\00\00\00\00\00\00\19\00\11\0a\19\19\19\03\0a\07\00\01\00\09\0b\18\00\00\09\06\0b\00\00\0b\00\06\19\00\00\00\19\19\19")
  (data (;2;) (i32.const 1137) "\0e\00\00\00\00\00\00\00\00\19\00\0a\0d\19\19\19\00\0d\00\00\02\00\09\0e\00\00\00\09\00\0e\00\00\0e")
  (data (;3;) (i32.const 1195) "\0c")
  (data (;4;) (i32.const 1207) "\13\00\00\00\00\13\00\00\00\00\09\0c\00\00\00\00\00\0c\00\00\0c")
  (data (;5;) (i32.const 1253) "\10")
  (data (;6;) (i32.const 1265) "\0f\00\00\00\04\0f\00\00\00\00\09\10\00\00\00\00\00\10\00\00\10")
  (data (;7;) (i32.const 1311) "\12")
  (data (;8;) (i32.const 1323) "\11\00\00\00\00\11\00\00\00\00\09\12\00\00\00\00\00\12\00\00\12\00\00\1a\00\00\00\1a\1a\1a")
  (data (;9;) (i32.const 1378) "\1a\00\00\00\1a\1a\1a\00\00\00\00\00\00\09")
  (data (;10;) (i32.const 1427) "\14")
  (data (;11;) (i32.const 1439) "\17\00\00\00\00\17\00\00\00\00\09\14\00\00\00\00\00\14\00\00\14")
  (data (;12;) (i32.const 1485) "\16")
  (data (;13;) (i32.const 1497) "\15\00\00\00\00\15\00\00\00\00\09\16\00\00\00\00\00\16\00\00\16\00\000123456789ABCDEF")
  (data (;14;) (i32.const 1536) ")\0b\00\00\1f\90\b3T\d4@r7\00\00\00\00\12}\f7]+k\c1\ce}\1d\15^7\0b\5c\84\a6\b8^\c5\c0\e2w\f4z\07\13\93`\9f\d3\cfi\5c\00\00\00\00\00\00\a41\13U\89gu5$\d0\ba\8a\00\00\00\00\e3;\c4\e7Qb\8f\095\a8&\00K/\00\00\96\cc\1e\f7`r^\b3K\9bUV\a4\d0\a6\91\05")
  (data (;15;) (i32.const 1652) "\02")
  (data (;16;) (i32.const 1676) "\03\00\00\00\04\00\00\00\c8So\16\00\04")
  (data (;17;) (i32.const 1700) "\01")
  (data (;18;) (i32.const 1716) "\ff\ff\ff\ff\0a")
  (data (;19;) (i32.const 1784) "h\06"))
